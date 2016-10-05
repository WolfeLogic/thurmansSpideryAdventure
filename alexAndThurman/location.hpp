//
//  location.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/6/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef location_hpp
#define location_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "item.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Location
{
protected:
    bool hasPortal;
    bool hasItem;
    bool hasThurman; //The location "has Thurman"
    Location* up;
    Location* down;
    Location* left;
    Location* right;
    Item* item;
    bool spidery;
    
public:
    Location();
    virtual string displayLocation();
    virtual string displayItem();
    virtual string locationMessage();
    virtual void initialize(Location* val[], bool spider, Item* bag[]);
    Location* move(int direction);
    bool getPortalStatus();
    void setPortalStatus(bool val);
    bool getThurmanStatus();
    void setThurmanStatus(bool val);
    bool getSpidery();
    void setSpidery(bool val);
    bool getItemStatus();
    void setItemStatus(bool val);
    Item* getItem();
    void setItem(Item* val);
    
    string displayStatus();

    
private:

};

#endif /* location_hpp */
