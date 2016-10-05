//
//  sunbrellaCorp.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/6/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef sunbrellaCorp_hpp
#define sunbrellaCorp_hpp

#include <stdio.h>
#include "location.hpp"

class SunbrellaCorp : public Location {
private:
    
public:
    SunbrellaCorp();
    virtual string displayLocation();
    virtual void initialize(Location* val[], bool spider, Item* bag[]);
};

#endif /* sunbrellaCorp_hpp */
