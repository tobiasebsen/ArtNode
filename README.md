[![Build Status](https://travis-ci.org/tobiasebsen/ArtNode.svg?branch=master)](https://travis-ci.org/tobiasebsen/ArtNode)

Introduction
------------
C++ library providing data structures and classes for implementing an Art-Net node on various platforms, including Arduino, Teensy, and similar embedded devices.
Please note that this library does not include a network layer interface for UDP.

Licence
-------
The code in this repository is available under the Apache License.

Copyright (C) 2015 Tobias Ebsen, [www.tobiasebsen.dk](http://tobiasebsen.dk)

Some files are from Art-Net definition authored by Artistic Licence Holdings Ltd.
Art-Net(TM) Designed by and Copyright Artistic Licence Holdings Ltd.


Installation
------------
#### Arduino
1. Download this repository as a zip-fil
2. Unzip the file and rename the enclosed folder to "ArtNode"
3. Move or copy the folder to your "Documents/Arduino/libraries/" folder.
4. Restart the Arduino IDE


Dependencies
------------
C++ standard library


Usage
------------

#### Configuration
Configuration is set and stored in a simple struct.
```c++
ArtConfig config = {
  .mac =  {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED}, // MAC
  .ip =   {2, 3, 4, 5},                         // IP
  .mask = {255, 0, 0, 0},                       // Subnet mask
  .udpPort = 0x1936,
  .dhcp = false,
  .net = 0, // Net (0-127)
  .subnet = 0,  // Subnet (0-15)
  "ArtNode", // Short name
  "ArtNode", // Long name
  .numPorts = 4,
  .portTypes = { PortTypeDmxOutput, PortTypeDmxOutput, PortTypeDmxOutput, PortTypeDmxOutput },
  .portAddrIn = {0, 0, 0, 0}, // Port input universes (0-15)
  .portAddrOut = {0, 1, 2, 3}, // Port output universes (0-15)
  .verHi = VERSION_HI,
  .verLo = VERSION_LO
};
```
#### Constructor
```c++
ArtNode node(config);
```

#### Sending a poll
```c++
node.createPoll();
udp.send(node.broadcastIP(), config.udpPort, node.getBufferData(), sizeof(ArtPoll));
```

#### Receiving packets
```c++
int n = udp.receive(node.getBufferData(), udp.available());
if (n > sizeof(ArtHeader) && node.isPacketValid()) {

  unsigned short opcode = node.getOpCode();
  if (opcode == OpPoll) {
    // Send poll reply
  }
  if (opcode == OpPollReply) {
    // Update list of nodes
  }
  if (opcode == OpDmx) {
    // Read DMX data
  }
}
```

#### Sending DMX (multicast)
```c++
node.createDmx();
ArtDmx *dmx = node.getBufferData();
dmx->Net = 0;
dmx->SubUni = 0;
dmx->Data[0] = 255;
udp.send(node.broadcastIP(), config.udpPort, node.getBufferData(), sizeof(ArtDmx));
```
