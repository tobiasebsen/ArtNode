/*
 *  ArtNode.cpp
 *  
 *  Created by Tobias Ebsen
 *
 *  19/06/17 - More functions
 *  06/02/13 - First draft
 *
 */

#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy
#include "ArtNode.h"

ArtNode::ArtNode() {
    this->config = new ArtConfig();
    this->bufferSize = 530;
    this->buffer = new unsigned char[bufferSize];
	this->packetSize = 0;
}

ArtNode::ArtNode(ArtConfig & config) {
    ArtNode(config, 530);
}

ArtNode::ArtNode(ArtConfig & config, int size) {
    this->config = &config;
    this->bufferSize = size;
    this->buffer = new unsigned char[size];
	this->packetSize = 0;
}

ArtNode::ArtNode(ArtConfig & config, int size, unsigned char * buffer) {
    this->config = &config;
    this->bufferSize = size;
    this->buffer = buffer;
	this->packetSize = 0;
}

unsigned char * ArtNode::getBufferData() {
    return buffer;
}

unsigned int ArtNode::getBufferSize() {
    return bufferSize;
}

unsigned int ArtNode::getPacketSize() {
	return packetSize;
}

uint32_t ArtNode::broadcastIP() {
    uint32_t mask = (config->mask[0] << 0) | (config->mask[1] << 8) | (config->mask[2] << 16) | (config->mask[3] << 24);
    uint32_t ip = (config->ip[0] << 0) | (config->ip[1] << 8) | (config->ip[2] << 16) | (config->ip[3] << 24);
    return (~mask) | ip;
}

uint8_t ArtNode::getPort(uint8_t net, uint8_t sub, uint8_t uni) {
    if ((net == config->net) && (sub == config->subnet)) {
        for (int i=0; i<config->numPorts; i++) {
            if ((config->portTypes[i] & PortTypeInput) && (uni == config->portAddrIn[i]))
                return i;
            if ((config->portTypes[i] & PortTypeOutput) && (uni == config->portAddrOut[i]))
                return i;
        }
    }
    return -1;
}

uint8_t ArtNode::getPort(uint8_t net, uint8_t subUni) {
    uint8_t sub = subUni >> 4;
    uint8_t uni = subUni & 0x0F;
    return getPort(net, sub, uni);
}

uint8_t ArtNode::getPort() {
    ArtDmx *dmx = (ArtDmx*)buffer;
    return getPort(dmx->Net, dmx->SubUni);
}

void ArtNode::setPacketHeader(unsigned char * buffer) {
	memcpy(buffer, "Art-Net", 8);
}

void ArtNode::setPacketHeader() {
    memcpy(buffer, "Art-Net", 8);
}

bool ArtNode::isPacketValid() {
    return memcmp(buffer, "Art-Net", sizeof(ArtHeader::ID)) == 0;
}

uint16_t ArtNode::getOpCode() {
    return ((ArtHeader*)buffer)->OpCode;
}

void ArtNode::setOpCode(uint16_t opCode) {
    ((ArtHeader*)buffer)->OpCode = opCode;
}


ArtPoll * ArtNode::createPoll(uint8_t talkToMe, uint8_t priority) {
    ArtPoll *poll = (ArtPoll*)buffer;
    setPacketHeader();
    poll->OpCode = OpPoll;
    poll->ProtVerHi = 0;
    poll->ProtVerLo = ProtocolVersion;
    poll->TalkToMe = talkToMe;
    poll->Priority = priority;
	packetSize = sizeof(ArtPoll);
	return poll;
}

ArtPollReply * ArtNode::createPollReply() {
    ArtPollReply *reply = (ArtPollReply*)buffer;
    memset(buffer, 0, sizeof(ArtPollReply));
    
    setPacketHeader();
    reply->OpCode = OpPollReply;
    memcpy(reply->BoxAddr.IP, config->ip, 4);
    reply->BoxAddr.Port = config->udpPort;
    
    reply->VersionInfoHi = config->verHi;
    reply->VersionInfoLo = config->verLo;
    
    reply->NetSwitch = config->net;
    reply->SubSwitch = config->subnet;

    strcpy((char*)reply->ShortName, config->shortName);
    strcpy((char*)reply->LongName, config->longName);
    
    reply->NumPortsLo = config->numPorts;
    memcpy(reply->PortTypes, config->portTypes, 4);
    memset(reply->GoodInput, 0x8, config->numPorts); // Input disabled
    memset(reply->GoodOutput, 0x80, config->numPorts); // Very important for MadMapper!
    memcpy(reply->SwIn, config->portAddrIn, 4);
    memcpy(reply->SwOut, config->portAddrOut, 4);
    reply->Style = StyleNode;
    memcpy(reply->Mac, config->mac, 6);
    reply->Status2 = 0x8; // Supports 15bit address (ArtNet 3)

	packetSize = sizeof(ArtPollReply);
	return reply;
}

ArtDmx * ArtNode::createDmx(uint8_t net, uint8_t subuni, uint16_t length) {
    ArtDmx *dmx = (ArtDmx*)buffer;
    setPacketHeader();
    dmx->OpCode = OpDmx;
    dmx->ProtVerHi = 0;
    dmx->ProtVerLo = ProtocolVersion;
    dmx->Sequence = 0;
    dmx->Physical = 0;
    dmx->Net = net;
    dmx->SubUni = subuni;
    dmx->Length = ((length & 0xFF) << 8) | (length >> 8);
	packetSize = sizeof(ArtDmx);
	return dmx;
}

ArtSync * ArtNode::createSync() {
    ArtSync *sync = (ArtSync*)buffer;
    setPacketHeader();
    sync->OpCode = OpSync;
    sync->ProtVerHi = 0;
    sync->ProtVerLo = ProtocolVersion;
    sync->Aux1 = 0;
    sync->Aux2 = 0;
	packetSize = sizeof(ArtSync);
	return sync;
}

ArtAddress * ArtNode::createAddress() {
    ArtAddress *addr = (ArtAddress*)buffer;
    memset(buffer, 0, sizeof(ArtAddress));
    setPacketHeader();
    addr->OpCode = OpAddress;
    addr->ProtVerHi = 0;
    addr->ProtVerLo = ProtocolVersion;
    addr->NetSwitch = 0x7F;
    addr->SubSwitch = 0x7F;
    for (int i=0; i<4; i++) {
        addr->SwIn[i] = 0x7F;
        addr->SwOut[i] = 0x7F;
    }
    addr->Command = 0;
	packetSize = sizeof(ArtAddress);
	return addr;
}

ArtIpProgReply * ArtNode::createIpProgReply() {
    ArtIpProgReply *reply = (ArtIpProgReply*)buffer;
    memset(buffer, 0, sizeof(ArtIpProgReply));
    
    setPacketHeader();
    reply->OpCode = OpIpProgReply;
    
    reply->ProtVerHi = 0;
    reply->ProtVerLo = ProtocolVersion;
    
    reply->ProgIpHi = config->ip[0];
    reply->ProgIp2 = config->ip[1];
    reply->ProgIp1 = config->ip[2];
    reply->ProgIpLo = config->ip[3];
    
    reply->ProgSmHi = config->mask[0];
    reply->ProgSm2 = config->mask[1];
    reply->ProgSm1 = config->mask[2];
    reply->ProgSmLo = config->mask[3];

    reply->ProgPortHi = config->udpPort >> 8;
    reply->ProgPortLo = config->udpPort & 0xFF;
    reply->Status = config->dhcp ? 0 : 0x40;
	packetSize = sizeof(ArtIpProgReply);
	return reply;
}

void ArtNode::handleAddress(ArtAddress * address) {

    if (address->NetSwitch & 0x80)
        config->net = address->NetSwitch & 0x7F;
    
    if (address->SubSwitch & 0x80)
        config->subnet = address->SubSwitch & 0x0F;
    
    if (address->LongName[0] != 0)
        memcpy(config->longName, address->LongName, 64);
    if (address->ShortName[0] != 0)
        memcpy(config->shortName, address->ShortName, 18);
    
    for (int i = 0; i < 4; i++) {
        if (address->SwIn[i] & 0x80)
            config->portAddrIn[i] = address->SwIn[i];
        if (address->SwOut[i] & 0x80) {
            config->portAddrOut[i] = address->SwOut[i];
        }
    }
}