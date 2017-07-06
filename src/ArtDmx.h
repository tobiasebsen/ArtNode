//
//  ArtDmx.h
//
//  Created by Tobias Ebsen on 28/06/17.
//
//

#ifndef ArtDmx_h
#define ArtDmx_h

#include "Art-Net.h"

class ArtDmx : public T_ArtDmx {
public:
    
    uchar getSubSwitch() {
        return this->SubUni & 0xF;
    }
    uchar getUni() {
        return (this->SubUni >> 4) & 0xF;
    }
    void setSubUni(uchar sub, uchar uni) {
        this->SubUni = ((sub & 0xF) << 4) | (uni & 0xF);
    }
    
    uchar getNet() {
        return this->Net;
    }
    void setNet(uchar net) {
        this->Net = net & 0x7F;
    }

    ushort getLength() {
        return ((this->Length & 0xF) << 8) | ((this->Length & 0xF0) >> 8);
    }
    void setLength(ushort length) {
        return ((length & 0xF) << 8) | ((length & 0xF0) >> 8);
    }
};

#endif /* ArtDmx_h */
