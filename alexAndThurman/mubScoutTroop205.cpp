//
//  mubScoutTroop205.cpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#include "mubScoutTroop205.hpp"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::string;

MubScoutTroop205::MubScoutTroop205():Location()
{
    
}

string MubScoutTroop205::displayLocation()
{
    if (spidery) {
        return "Spidery Mub Scout Troop 205's Den House";
    } else {
        return "Mub Scout Troop 205's Den House";
    }
}

void MubScoutTroop205::initialize(Location* val[], bool spider, Item* bag[])
{
    up = val [3]; //Theme Park
    down = val[6]; //Library
    left = val[1]; //Comic Store
    right = val[5]; //Grave
    
    spidery = spider;
    
    if (spider) {
        
        item = bag[4]; //Rabbits ft
        setItemStatus(true);
    } else { item = NULL; }
}