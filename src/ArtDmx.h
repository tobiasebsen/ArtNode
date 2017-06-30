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
    ushort getLength() {
        return ((this->Length & 0xF) << 8) & ((this->Length & 0xF0) >> 8);
    }
};

#endif /* ArtDmx_h */
