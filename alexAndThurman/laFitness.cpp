//
//  laFitness.cpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#include "laFitness.hpp"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::string;

LAFitness::LAFitness():Location()
{
    
}

string LAFitness::displayLocation()
{
    if (spidery) {
        return "Spidery L.A. Fitness";
    } else {
        return "L.A. Fitness";
    }
}

void LAFitness::initialize(Location* val[], bool spider, Item* bag[])
{
    up = val [2]; //Skate
    down = val[0]; //Sunbrella
    left = val[6]; //Library
    right = val[5]; //Grave
    
    spidery = spider;
    
    if (spider) {
        
        item = bag[1]; //Slingshot
        setItemStatus(true);
    } else { item = NULL; }
}
