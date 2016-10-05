//
//  slingShotAndAgSlugs.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef slingShotAndAgSlugs_hpp
#define slingShotAndAgSlugs_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "item.hpp"

using std::string;

class SlingShotAndAgSlugs : public Item {
private:
    
public:
    SlingShotAndAgSlugs();
    string displayItem();
};

#endif /* slingShotAndAgSlugs_hpp */
