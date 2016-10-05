//
//  krinklyDarHoofsGrave.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef krinklyDarHoofsGrave_hpp
#define krinklyDarHoofsGrave_hpp

#include <stdio.h>
#include "location.hpp"
#include "item.hpp"

class KrinklyDarHoofsGrave : public Location {
private:
    
public:
    KrinklyDarHoofsGrave();
    virtual string displayLocation();
    virtual void initialize(Location* val[], bool spider, Item* bag[]);
};


#endif /* krinklyDarHoofsGrave_hpp */
