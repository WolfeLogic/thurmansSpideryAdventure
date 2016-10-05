//
//  mubScoutTroop205.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef mubScoutTroop205_hpp
#define mubScoutTroop205_hpp

#include <stdio.h>
#include "location.hpp"
#include "item.hpp"

class MubScoutTroop205 : public Location {
private:
    
public:
    MubScoutTroop205();
    virtual string displayLocation();
    virtual void initialize(Location* val[], bool spider, Item* bag[]);
};

#endif /* mubScoutTroop205_hpp */
