//
//  flashlight.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef flashlight_hpp
#define flashlight_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "item.hpp"

using std::string;

class Flashlight : public Item {
private:
    
public:
    Flashlight();
    string displayItem();
};

#endif /* flashlight_hpp */
