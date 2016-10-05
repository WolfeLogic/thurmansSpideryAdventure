//
//  magicClock.cpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#include "magicClock.hpp"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::string;

MagicClock::MagicClock()
{
    useful = true;
}

string MagicClock::displayItem()
{
    return "a Magic Clock";
}
