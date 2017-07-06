#include <SPI.h>
#include <Ethernet.h>
#include <ArtNode.h>

#define VERSION_HI 0
#define VERSION_LO 1

////////////////////////////////////////////////////////////
ArtConfig config = {
  {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED}, // MAC
  {2, 3, 4, 5},                         // IP
  {255, 0, 0, 0},                       // Subnet mask
  0x1936,                               // UDP port
  false,                                // DHCP
  0, 0,                                 // Net (0-127) and subnet (0-15)
  "ArtNode",                            // Short name
  "ArtNode",                            // Long name
  4,                                    // Number of ports
  {PortTypeDmx | PortTypeOutput, PortTypeDmx | PortTypeOutput, PortTypeDmx | PortTypeOutput, PortTypeDmx | PortTypeOutput}, // Port types
  {0, 0, 0, 0},                         // Port input universes (0-15)
  {0, 1, 2, 3},                         // Port output universes (0-15)
  VERSION_HI,
  VERSION_LO
};
////////////////////////////////////////////////////////////
IPAddress gateway(config.ip[0], 0, 0, 1);
EthernetUDP udp;
byte buffer[600];
ArtNode node = ArtNode(config, sizeof(buffer), buffer);

////////////////////////////////////////////////////////////
void setup() {

  Ethernet.begin(config.mac, config.ip,  gateway, gateway, config.subnet);
  udp.begin(config.udpPort);
}

////////////////////////////////////////////////////////////
void loop() {
  
  while (udp.parsePacket()) {

    int n = udp.read(buffer, min(udp.available(), sizeof(buffer)));
    if (n >= sizeof(ArtHeader) && node.isPacketValid()) {

      // Package Op-Code determines type of packet
      switch (node.getOpCode()) {

        // Poll packet. Send poll reply.
        case OpPoll: {
          ArtPoll* poll = (ArtPoll*)buffer;
          node.createPollReply();
          udp.beginPacket(node.broadcastIP(), config.udpPort);
          udp.write(buffer, sizeof(ArtPollReply));
          udp.endPacket();
        } break;

        // DMX packet
        case OpDmx: {
            ArtDmx* dmx = (ArtDmx*)buffer;
            int port = node.getPort(dmx->SubUni, dmx->Net);
            int len = dmx->getLength();
            byte *data = dmx->Data;
            if (port >= 0 && port < config.numPorts) {
            }
        } break;

        default:
          break;
      }
    }
  }
}

