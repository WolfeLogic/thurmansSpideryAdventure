//
//  skatePark.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef skatePark_hpp
#define skatePark_hpp

#include <stdio.h>
#include "location.hpp"
#include "item.hpp"

class SkatePark : public Location {
private:
    
public:
    SkatePark();
    virtual string displayLocation();
    virtual void initialize(Location* val[], bool spider, Item* bag[]);
};


#endif /* skatePark_hpp */
