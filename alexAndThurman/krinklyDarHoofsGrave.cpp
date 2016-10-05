//
//  krinklyDarHoofsGrave.cpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#include "krinklyDarHoofsGrave.hpp"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::string;

KrinklyDarHoofsGrave::KrinklyDarHoofsGrave():Location()
{
    
}

string KrinklyDarHoofsGrave::displayLocation()
{
    if (spidery) {
        return "Spidery Krinkly Dar Hoof's Grave";
    } else {
        return "Krinkly Dar Hoof's Grave";
    }
}

void KrinklyDarHoofsGrave::initialize(Location* val[], bool spider, Item* bag[])
{
    up = val [3]; //Theme Park
    down = val[7]; //LAFit
    left = val[4]; //Scout
    right = val[6]; //Library
    
    spidery = spider;
    
    if (spider) {
        
        item = bag[3]; //Flashlight
        setItemStatus(true);
    } else { item = NULL; }
}