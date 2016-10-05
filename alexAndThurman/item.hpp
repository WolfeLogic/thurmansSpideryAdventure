//
//  item.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef item_hpp
#define item_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

using std::string;

class Item
{
private:
    
public:
    Item();
    virtual string displayItem();
    bool useful = false;
};

#endif /* item_hpp */
