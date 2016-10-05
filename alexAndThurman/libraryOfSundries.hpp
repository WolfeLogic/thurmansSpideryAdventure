//
//  libraryOfSundries.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef libraryOfSundries_hpp
#define libraryOfSundries_hpp

#include <stdio.h>
#include "location.hpp"
#include "item.hpp"

class LibraryOfSundries : public Location {
private:
    
public:
    LibraryOfSundries();
    virtual string displayLocation();
    virtual void initialize(Location* val[], bool spider, Item* bag[]);
};

#endif /* libraryOfSundries_hpp */
