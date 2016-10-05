//
//  schwankles.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef schwankles_hpp
#define schwankles_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "item.hpp"

using std::string;

class Schwankles : public Item {
private:
    
public:
    Schwankles();
    string displayItem();
};

#endif /* schwankles_hpp */
