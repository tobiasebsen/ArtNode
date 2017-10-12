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
#include "ArtPollReply.h"
#include "ArtDmx.h"

#include <inttypes.h>

#define PortTypeDmx     0x00
#define PortTypeMidi    0x01
#define PortTypeInput   0x40
#define PortTypeOutput  0x80

typedef struct S_ArtHeader {
    uchar ID[8];                    // protocol ID = "Art-Net"
    ushort OpCode;
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
    uchar  mac[6];
    uchar  ip[4];
    uchar  mask[4];
    ushort udpPort;
    uchar  dhcp;
    uchar  net;
    uchar  subnet;
    char   shortName[18];
    char   longName[64];
    uchar  numPorts;
    uchar  portTypes[4];
    uchar  portAddrIn[4];
    uchar  portAddrOut[4];
    uchar  verHi;
    uchar  verLo;
} T_ArtConfig;

typedef T_ArtHeader         ArtHeader;
typedef T_ArtConfig         ArtConfig;
typedef T_ArtPoll           ArtPoll;
//typedef T_ArtPollReply      ArtPollReply;
//typedef T_ArtDmx            ArtDmx;
typedef T_ArtSync           ArtSync;
typedef T_ArtDmxHeader      ArtDmxHeader;
typedef T_ArtAddress        ArtAddress;
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
	unsigned int getPacketSize();

    uint32_t broadcastIP();
    uint8_t getPort(uint8_t net, uint8_t subUni);
    uint8_t getPort();

	static void setPacketHeader(unsigned char * buffer);
    void setPacketHeader();
    bool isPacketValid();

    uint16_t getOpCode();
	void setOpCode(uint16_t opCode);
    
    ArtPoll *		createPoll(uint8_t talkToMe = 0, uint8_t priority = 0);
    ArtPollReply *	createPollReply();
    ArtDmx *		createDmx(uint8_t net = 0, uint8_t subnet = 0, uint16_t length = 512);
    ArtSync *		createSync();
    ArtAddress *	createAddress();
    ArtIpProg *		createIpProg();
    ArtIpProgReply *createIpProgReply();
    
    template<typename T>
    T* getDataAs() {
        return (T*)buffer;
    }
    
protected:

    ArtConfig *config;

    unsigned char * buffer;
    int bufferSize;
	int packetSize;
};

#endif