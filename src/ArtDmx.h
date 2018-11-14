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
	ArtDmx() {
		this->OpCode = OpDmx;
		this->ProtVerHi = 0;
		this->ProtVerLo = ProtocolVersion;
		this->Sequence = 0;
		this->Physical = 0;
		setSubUni(0, 0);
		setNet(0);
		setLength(sizeof(Data));
	}
    
    uchar getSub() {
        return (this->SubUni >> 4) & 0xF;
    }
    uchar getUni() {
        return this->SubUni & 0xF;
    }
    void setSubUni(uchar sub, uchar uni) {
        this->SubUni = ((sub & 0xF) << 4) | (uni & 0xF);
    }
    void setSubUni(uchar subuni) {
        this->SubUni = subuni;
    }
    
    uchar getNet() {
        return this->Net;
    }
    void setNet(uchar net) {
        this->Net = net & 0x7F;
    }

    ushort getLength() {
        return ((this->Length & 0xFF) << 8) | ((this->Length & 0xFF00) >> 8);
    }
    void setLength(ushort length) {
        this->Length = ((length & 0xFF) << 8) | ((length & 0xFF00) >> 8);
    }

    ushort getSize() {
        return (this->Data - this->ID) + getLength();
    }
};

#endif /* ArtDmx_h */
