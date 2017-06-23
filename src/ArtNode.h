/*
 *  ArtNode.h
 *
 *  Created by Tobias Ebsen
 *
 *  Implementation of the Art-Net 3 protocol.
 *
 *  This file is free software; you can redistribute it and/or modify
 *  it under the terms of GNU General Public License version 3 as
 *  published by the Free Software Foundation.
 *
 *  Art-Net(TM) Designed by and Copyright Artistic Licence Holdings Ltd
 *
 */

#ifndef ArtNode_h
#define ArtNode_h

#pragma pack(1)
#include "Art-Net.h"

#include <inttypes.h>

#define PortTypeDmx     0x00
#define PortTypeMidi    0x01
#define PortTypeInput   0x40
#define PortTypeOutput  0x80

typedef struct S_ArtHeader {
    uchar ID[8];                    // protocol ID = "Art-Net"
    ushort OpCode;                  // == OpPoll
} T_ArtHeader;

typedef struct S_ArtDmxHeader {
    uchar ID[8];
    ushort OpCode;
    uchar ProtVerHi;
    uchar ProtVerLo;
    uchar Sequence;
    uchar Physical;
    uchar SubUni;
    uchar Net;
    ushort Length;
} T_ArtDmxHeader;

typedef struct S_ArtConfig {
    uint8_t  mac[6];
    uint8_t  ip[4];
    uint8_t  mask[4];
    uint16_t udpPort;
    uint8_t  dhcp;
    uint8_t  net;
    uint8_t  subnet;
    char     shortName[18];
    char     longName[64];
    uint8_t  numPorts;
    uint8_t  portTypes[4];
    uint8_t  portAddrIn[4];
    uint8_t  portAddrOut[4];
    uint8_t  verHi;
    uint8_t  verLo;
} T_ArtConfig;

typedef T_ArtHeader         ArtHeader;
typedef T_ArtConfig         ArtConfig;
typedef T_ArtPoll           ArtPoll;
typedef T_ArtPollReply      ArtPollReply;
typedef T_ArtDmx            ArtDmx;
typedef T_ArtDmxHeader      ArtDmxHeader;
typedef T_ArtIpProg         ArtIpProg;
typedef T_ArtIpProgReply    ArtIpProgReply;

class ArtNode {
public:
    ArtNode();
    ArtNode(ArtConfig & config);
    ArtNode(ArtConfig & config, int size);
    ArtNode(ArtConfig & config, int size, unsigned char * buffer);
    
    ArtConfig * getConfig();
    unsigned char* getBufferData();
    unsigned int getBufferSize();

    uint32_t broadcastIP();
    uint8_t getPort(uint8_t subUni, uint8_t net);

    void setPacketHeader();
    bool isPacketValid();

    uint16_t getOpCode();
    void setOpCode(uint16_t opCode);
    
    void createPoll(uint8_t talkToMe = 0, uint8_t priority = 0);
    void createPollReply();
    void createDmx(uint8_t net = 0, uint8_t subnet = 0, uint16_t length = 512);
    void createIpProg();
    void createIpProgReply();
    
protected:

    ArtConfig *config;

    unsigned char * buffer;
    int bufferSize;
};

#endif