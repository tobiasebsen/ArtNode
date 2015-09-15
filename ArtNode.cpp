/*
 *  ArtNode.cpp
 *  
 *  Created by Tobias Ebsen on 6/2/13.
 *
 */

#include <stdio.h>
#include <stdlib.h> // malloc
#include <string.h> // memcpy
#include "ArtNode.h"

ArtNode::ArtNode() {
    this->config = new ArtConfig();
}

ArtNode::ArtNode(ArtConfig & config) {
    ArtNode(config, 530);
}

ArtNode::ArtNode(ArtConfig & config, int size) {
    this->config = &config;
    this->bufferSize = size;
    this->buffer = new unsigned char[size];
}

ArtNode::ArtNode(ArtConfig & config, int size, unsigned char * buffer) {
    this->config = &config;
    this->bufferSize = size;
    this->buffer = buffer;
}

uint32_t ArtNode::broadcastIP() {
    uint32_t mask = config->mask[0] | (config->mask[1] << 8) | (config->mask[2] << 16) | (config->mask[3] << 24);
    uint32_t ip = config->ip[0] | (config->ip[1] << 8) | (config->ip[2] << 16) | (config->ip[3] << 24);
    return (~mask) | ip;
}

uint8_t ArtNode::getPort(uint8_t subUni, uint8_t net) {
    if ((net == config->net) && ((subUni >> 4) == config->subnet)) {
        subUni &= 0x0F;
        for (int i=0; i<config->numPorts; i++) {
            if ((config->portTypes[i] & PortTypeInput) && (subUni == config->portAddrIn[i]))
                return i;
            if ((config->portTypes[i] & PortTypeOutput) && (subUni == config->portAddrOut[i]))
                return i;
        }
    }
    return -1;
}

void ArtNode::createPollReply() {
    ArtPollReply *reply = (ArtPollReply*)buffer;
    memset(buffer, 0, sizeof(ArtPollReply));
    
    memcpy(reply->ID, "Art-Net", 8);
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
    memset(reply->GoodOutput, 0x80, config->numPorts); // Very important for MadMapper!
    memcpy(reply->SwIn, config->portAddrIn, 4);
    memcpy(reply->SwOut, config->portAddrOut, 4);
    reply->Style = StyleNode;
    memcpy(reply->Mac, config->mac, 6);
}

void ArtNode::createIpProgReply() {
    ArtIpProgReply *reply = (ArtIpProgReply*)buffer;
    memset(buffer, 0, sizeof(ArtIpProgReply));
    
    memcpy(buffer, "Art-Net", 8);
    reply->OpCode = OpIpProgReply;
    
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
}
