//
//  ArtPollReply.h
//
//  Created by Tobias Ebsen on 23/06/17.
//
//

#ifndef ArtPollReply_h
#define ArtPollReply_h

#include "Art-Net.h"

class ArtPollReply : public T_ArtPollReply {
public:
    uchar getPortProtocol(uchar port) const {
        return this->PortTypes[port] & 0x1F;
    }
    ushort getPortAddress(uchar port) const {
        if (this->PortTypes[port] & 0x80)
            return ((this->NetSwitch & 0x7F) << 8) | ((this->SubSwitch & 0xF) << 4) | (this->SwOut[port] & 0xF);
        else
            return ((this->NetSwitch & 0x7F) << 8) | ((this->SubSwitch & 0xF) << 4) | (this->SwIn[port] & 0xF);
    }
};

#endif /* ArtPollReply_h */
