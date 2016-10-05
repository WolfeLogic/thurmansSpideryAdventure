//
//  rabbitsFoot.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef rabbitsFoot_hpp
#define rabbitsFoot_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "item.hpp"

using std::string;

class RabbitsFoot : public Item {
private:
    
public:
    RabbitsFoot();
    string displayItem();
};

#endif /* rabbitsFoot_hpp */
