//
//  location.cpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/6/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#include "location.hpp"

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;

Location::Location()
{
    setPortalStatus(false);
    setThurmanStatus(false);
    setItemStatus(false);
    
}

string Location::displayLocation()
{
    return "Parent Location";
}

string Location::displayItem()
{
    if (item != NULL) {
        return item->displayItem();
    } else { return "no item";}
}

string Location::locationMessage()
{
    return "Standard message";
}

void Location::initialize(Location* val[], bool spider, Item* bag[])
{
    
}

Location* Location::move(int direction)
{
    if (direction == 1) {
        return up;
    } else if (direction == 2){
        return down;
    } else if (direction == 3){
        return right;
    } else {
        return left;
    }
}

bool Location::getPortalStatus()
{
    return hasPortal;
}

void Location::setPortalStatus(bool val)
{
    hasPortal = val;
}

bool Location::getThurmanStatus()
{
    return hasThurman;
}

void Location::setThurmanStatus(bool val)
{
    hasThurman = val;
}

bool Location::getSpidery()
{
    return spidery;
}

void Location::setSpidery(bool val)
{
    spidery = val;
}

bool Location::getItemStatus()
{
    return hasItem;
}

void Location::setItemStatus(bool val)
{
    hasItem = val;
}
Item* Location::getItem()
{
    return item;
}

void Location::setItem(Item* val)
{
    item = val;
}

string Location::displayStatus()
{
    string val = "";
    if (getThurmanStatus()) {
        val +=
        "╦ ╦╔═╗╦ ╦  ╔═╗╔═╗╦ ╦╔╗╔╔╦╗  ╔╦╗╦ ╦╦ ╦╦═╗╔╦╗╔═╗╔╗╔┬┬┬\n"
        "╚╦╝║ ║║ ║  ╠╣ ║ ║║ ║║║║ ║║   ║ ╠═╣║ ║╠╦╝║║║╠═╣║║║│││\n"
        " ╩ ╚═╝╚═╝  ╚  ╚═╝╚═╝╝╚╝═╩╝   ╩ ╩ ╩╚═╝╩╚═╩ ╩╩ ╩╝╚╝ooo\n";
        
    }
    if (getPortalStatus()) {
        val += "*** The portal is here! ***\n";
    }
    return val;
}

