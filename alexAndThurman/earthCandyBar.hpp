//
//  earthCandyBar.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef earthCandyBar_hpp
#define earthCandyBar_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "item.hpp"

using std::string;

class EarthCandyBar : public Item {
private:
    
public:
    EarthCandyBar();
    string displayItem();
};

#endif /* earthCandyBar_hpp */
