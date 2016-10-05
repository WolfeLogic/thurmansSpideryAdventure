//
//  magicClock.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef magicClock_hpp
#define magicClock_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "item.hpp"

using std::string;

class MagicClock : public Item {
private:
    
public:
    MagicClock();
    string displayItem();
};

#endif /* magicClock_hpp */
