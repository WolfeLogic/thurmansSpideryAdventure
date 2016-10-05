//
//  abandonedThemePark.cpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#include "abandonedThemePark.hpp"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::string;

AbandonedThemePark::AbandonedThemePark():Location()
{
    
}

string AbandonedThemePark::displayLocation()
{
    if (spidery) {
        return "Spidery Abandoned Studio Ghibli Theme Park";
    } else {
        return "Abandoned Studio Ghibli Theme Park";
    }
}

void AbandonedThemePark::initialize(Location* val[], bool spider, Item* bag[])
{
    up = val [1]; //Comic Store
    down = val[5]; //Grave
    left = val[4]; //Scout
    right = val[2]; //Skate
    
    spidery = spider;
    
    if (spider) {
        
        item = bag[5]; //Schwankles (cash)
        setItemStatus(true);
    } else { item = NULL; }
}

