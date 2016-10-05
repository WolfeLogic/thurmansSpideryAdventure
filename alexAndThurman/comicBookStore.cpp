//
//  comicBookStore.cpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#include "comicBookStore.hpp"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::string;

ComicBookStore::ComicBookStore():Location()
{
    
}

string ComicBookStore::displayLocation()
{
    if (spidery) {
        return "Spidery Comic Book Store";
    } else {
        return "Comic Book Store";
    }
}

void ComicBookStore::initialize(Location* val[], bool spider, Item* bag[])
{
    up = val [2]; //Skate
    down = val[0]; //Sunbrella
    left = val[4]; //Scout
    right = val[3]; //Theme Park
    
    spidery = spider;
    
    item = NULL;
}