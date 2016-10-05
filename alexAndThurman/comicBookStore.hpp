//
//  comicBookStore.hpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/7/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

#ifndef comicBookStore_hpp
#define comicBookStore_hpp

#include <stdio.h>
#include "location.hpp"
#include "item.hpp"

class ComicBookStore : public Location {
private:
    
public:
    ComicBookStore();
    virtual string displayLocation();
    virtual void initialize(Location* val[], bool spider, Item* bag[]);
};

#endif /* comicBookStore_hpp */
