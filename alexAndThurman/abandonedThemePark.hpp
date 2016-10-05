//
//  abandonedThemePark.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef abandonedThemePark_hpp
#define abandonedThemePark_hpp

#include <stdio.h>
#include "location.hpp"
#include "item.hpp"

class AbandonedThemePark : public Location {
private:
    
public:
    AbandonedThemePark();
    virtual string displayLocation();
    virtual void initialize(Location* val[], bool spider, Item* bag[]);
};

#endif /* abandonedThemePark_hpp */
