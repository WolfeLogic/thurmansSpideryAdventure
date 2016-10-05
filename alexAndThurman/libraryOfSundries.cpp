//
//  libraryOfSundries.cpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#include "libraryOfSundries.hpp"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::string;

LibraryOfSundries::LibraryOfSundries():Location()
{
    
}

string LibraryOfSundries::displayLocation()
{
    if (spidery) {
        return "Spidery Library of Sundries";
    } else {
        return "Library of Sundries";
    }
}

void LibraryOfSundries::initialize(Location* val[], bool spider, Item* bag[])
{
    up = val [5]; //Grave
    down = val[0]; //Sunbrella
    left = val[4]; //Scout
    right = val[7]; //LAFit
    
    spidery = spider;
    
    if (spider) {
        
        item = bag[2]; //Candybar
        setItemStatus(true);
    } else { item = NULL; }
}