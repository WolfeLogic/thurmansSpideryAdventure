//
//  sunbrellaCorp.cpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/6/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#include "sunbrellaCorp.hpp"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::string;

SunbrellaCorp::SunbrellaCorp():Location()
{
    
}

string SunbrellaCorp::displayLocation()
{
    if (spidery) {
        return "Spidery Sunbrella Corp";
    } else {
    return "Sunbrella Corp";
    }
}

void SunbrellaCorp::initialize(Location* val[], bool spider, Item* bag[])
{
    up = val [1]; //Comic
    down = val[6]; //Library
    left = val[2]; //Skate
    right = val[7]; //LAFit
    
    spidery = spider;
    
    if (spider) {
        
        item = bag[0]; //Clock
        setItemStatus(true);
    } else { item = NULL;}
}



