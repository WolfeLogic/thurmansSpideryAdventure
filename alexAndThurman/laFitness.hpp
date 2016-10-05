//
//  laFitness.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef laFitness_hpp
#define laFitness_hpp

#include <stdio.h>
#include "location.hpp"
#include "item.hpp"

class LAFitness : public Location {
private:
    
public:
    LAFitness();
    virtual string displayLocation();
    virtual void initialize(Location* val[], bool spider, Item* bag[]);
};


#endif /* laFitness_hpp */
