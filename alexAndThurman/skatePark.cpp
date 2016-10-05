//
//  skatePark.cpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#include "skatePark.hpp"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::string;

SkatePark::SkatePark():Location()
{
    
}

string SkatePark::displayLocation()
{
    if (spidery) {
        return "Spidery Skate Park";
    } else {
        return "Skate Park";
    }
}

void SkatePark::initialize(Location* val[], bool spider, Item* bag[])
{
    up = val [1]; //Comic Store
    down = val[7]; //LAFit
    left = val[3]; //Theme Park
    right = val[0]; //Sunbrella
    
    spidery = spider;
    
    item = NULL;
}
