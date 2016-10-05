//
//  main.cpp
//  alexAndThurman
//
//  Created by Drew Wolfe on 8/3/16.
//  Copyright © 2016 Drew Wolfe. All rights reserved.
//

// ______  __  __   __  __   ______   __    __   ______   __   __   ______
///\__  _\/\ \_\ \ /\ \/\ \ /\  == \ /\ "-./  \ /\  __ \ /\ "-.\ \ /\  ___\
//\/_/\ \/\ \  __ \\ \ \_\ \\ \  __< \ \ \-./\ \\ \  __ \\ \ \-.  \\ \___  \
//   \ \_\ \ \_\ \_\\ \_____\\ \_\ \_\\ \_\ \ \_\\ \_\ \_\\ \_\\"\_\\/\_____\
//    \/_/  \/_/\/_/ \/_____/ \/_/ /_/ \/_/  \/_/ \/_/\/_/ \/_/ \/_/ \/_____/
// ______   ______  __   _____    ______   ______   __  __
///\  ___\ /\  == \/\ \ /\  __-. /\  ___\ /\  == \ /\ \_\ \
//\ \___  \\ \  _-/\ \ \\ \ \/\ \\ \  __\ \ \  __< \ \____ \
// \/\_____\\ \_\   \ \_\\ \____- \ \_____\\ \_\ \_\\/\_____\
//  \/_____/ \/_/    \/_/ \/____/  \/_____/ \/_/ /_/ \/_____/
// ______   _____    __   __ ______   __   __   ______  __  __   ______   ______
///\  __ \ /\  __-. /\ \ / //\  ___\ /\ "-.\ \ /\__  _\/\ \/\ \ /\  == \ /\  ___\
//\ \  __ \\ \ \/\ \\ \ \'/ \ \  __\ \ \ \-.  \\/_/\ \/\ \ \_\ \\ \  __< \ \  __\
// \ \_\ \_\\ \____- \ \__|  \ \_____\\ \_\\"\_\  \ \_\ \ \_____\\ \_\ \_\\ \_____\
//  \/_/\/_/ \/____/  \/_/    \/_____/ \/_/ \/_/   \/_/  \/_____/ \/_/ /_/ \/_____/

#include <iostream>
#include <stdio.h>
#include <string>
#include <unistd.h>
#include <stdlib.h>

#include "location.hpp"
#include "item.hpp"
#include "sunbrellaCorp.hpp"
#include "comicBookStore.hpp"
#include "skatePark.hpp"
#include "abandonedThemePark.hpp"
#include "mubScoutTroop205.hpp"
#include "krinklyDarHoofsGrave.hpp"
#include "libraryOfSundries.hpp"
#include "laFitness.hpp"
#include "magicClock.hpp"
#include "slingShotAndAgSlugs.hpp"
#include "earthCandyBar.hpp"
#include "flashlight.hpp"
#include "rabbitsFoot.hpp"
#include "schwankles.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void initialize();
void knapsackInitialize();
int movementMenu(bool portal, bool item);
int knapsackMenu();
int knapsackDeleteMenu();
int knapsackUseMenu();

Location* world[8];
Location* spideryWorld[8];
Item* bagOfAllTricks[6]; //Alex's knapsack is limited to 4 items w/ 6 options
Item* knapsack[4];

Location* locationMenu();
bool foundThurman = false;
int moveCounter = 0;
int moveLimit = 10;


int main(int argc, const char * argv[])
{
    
    cout << "Welcome to Thurman's Adventure!" << endl;
    
    cout << "This is a text game where you attempt to find and save " << endl;
    cout << "your friend Thurman. He's accidentally slipped into a" << endl;
    cout << "portal where there are some unfriendly man-eating spiders" << endl;
    cout << "lurking. Your job is to find the portal to get over to the" << endl;
    cout << "Alternate Spidery Universe (or \"ASU\") and find Thurman." << endl;
    cout << "After you find the portal into ASU and find Thurman, you must" << endl;
    cout << "find the portal out of ASU into Non Spidery Universe (or " << endl;
    cout << "\"NSU\") in order to win the game. But you only have so many" << endl;
    cout << "moves, so hurry through those portals, find Thurman, and then get" << endl;
    cout << "out! There are items in ASU that may (or may not) help you along" << endl;
    cout << "the way. Use them and see what happens. Good luck and good hunting!" << endl;
    
    initialize();
    
    Location* alex = world[0];
    while (moveCounter < moveLimit)
    {
        cout << endl << "You are in " << alex->displayLocation() << endl;
        cout << "There is " << alex->displayItem() << " in this place." << endl;
        cout << alex->displayStatus();
        
        if (alex->getThurmanStatus()) {
            foundThurman = true;
            alex->setThurmanStatus(false);
        }
        
        int dir = movementMenu(alex->getPortalStatus(), alex->getItemStatus());
        if (dir == 5 && alex->getPortalStatus())
        {
            if (alex->getSpidery())
            {
                if (foundThurman) {
                    cout << "*** You've saved Thurman and won the game ***" << endl;
                    return 0;
                } else
                {
                    alex = world[0];
                }
            } else
            {
            alex = spideryWorld[0];
            }
        }
        if (dir == 1 || dir == 2 || dir == 3 || dir == 4) {
            moveCounter++;
            alex = alex->move(dir);
        }
        
        
        if (dir == 6)
        {
            bool added = false;
            for (int i = 0; i < 4; i++) {
                if (knapsack[i] == NULL) {
                    knapsack[i] = alex->getItem();
                    alex->setItem(NULL);
                    alex->setItemStatus(false);
                    added = true;
                    break;
                }
            } if (!added) {
                cout << "Knapsack is full!" << endl;
            }
        }
        
        if (dir == 0) {
            bool exit = false;
            while (!exit) {
                int val = knapsackMenu();
                if (val == 0) {
                    exit = true;
                }
                if (val == 1) {
                    for (int i = 0; i < 4; i++) {
                        if (knapsack[i] != NULL) {
                            cout << knapsack[i]->displayItem() << endl;
                        }
                    }
                }
                
                if (val == 2) {
                    int val2 = knapsackDeleteMenu();
                    if (val2 == 1) {
                        knapsack[0] = NULL;
                    }
                    if (val2 == 2) {
                        knapsack[1] = NULL;
                    }
                    if (val2 == 3) {
                        knapsack[2] = NULL;
                    }
                    if (val2 == 4) {
                        knapsack[3] = NULL;
                    }
                }
                if (val == 3) {
                    int val3 = knapsackUseMenu();
                    Item* used = NULL;
                    
                    if (val3 == 1) {
                        used = knapsack[0];
                        knapsack[0] = NULL;
                    }
                    if (val3 == 2) {
                        used = knapsack[1];
                        knapsack[1] = NULL;
                    }
                    if (val3 == 3) {
                        used = knapsack[2];
                        knapsack[2] = NULL;
                    }
                    if (val3 == 4) {
                        used = knapsack[3];
                        knapsack[3] = NULL;
                    }
                    if (used != NULL && used->useful) {
                        cout << "*** Your moves counter has been reset! ***" << endl;
                        moveCounter = 0;
                    } else { cout << "This item did nothing!" << endl;}
                }
            }
            
        }
        
        cout << "Move Counter " << moveCounter << endl; //used to debug
    }
    
    cout <<	"	Y88b Y8P   e88 88e   8888 8888                                                  	" << endl;
    cout <<	"	 Y88b Y   d888 888b  8888 8888                                                  	" << endl;
    cout <<	"	  Y88b   C8888 8888D 8888 8888                                                  	" << endl;
    cout <<	"	   888    Y888 888P  8888 8888                                                  	" << endl;
    cout <<	"	   888     '88 88'   'Y88 88P'                                                  	" << endl;
    cout <<	"	                                                                                	" << endl;
    cout <<	"	                                                                                	" << endl;
    cout <<	"	888 88P 888 888     888     888'Y88 888 88e                                     	" << endl;
    cout <<	"	888 8P  888 888     888     888 ,'Y 888 888b                                    	" << endl;
    cout <<	"	888 K   888 888     888     888C8   888 8888D                                   	" << endl;
    cout <<	"	888 8b  888 888  ,d 888  ,d 888 ',d 888 888P                                    	" << endl;
    cout <<	"	888 88b 888 888,d88 888,d88 888,d88 888 88'                                     	" << endl;
    cout <<	"	                                                                                	" << endl;
    cout <<	"	                                                                                	" << endl;
    cout <<	"	88P'888'Y88 888 888 8888 8888 888 88e      e   e         e Y8b     Y88b Y88 888 	" << endl;
    cout <<	"	P'  888  'Y 888 888 8888 8888 888 888D    d8b d8b       d8b Y8b     Y88b Y8 888 	" << endl;
    cout <<	"	    888     8888888 8888 8888 888 88'    e Y8b Y8b     d888b Y8b   b Y88b Y '8' 	" << endl;
    cout <<	"	    888     888 888 8888 8888 888 b,    d8b Y8b Y8b   d888888888b  8b Y88b   e  	" << endl;
    cout <<	"	    888     888 888 'Y88 88P' 888 88b, d888b Y8b Y8b d8888888b Y8b 88b Y88b '8' 	" << endl;
    cout << endl << "You took too long! Thurman's been eaten by spiders! You're a horrible friend!" << endl;

    return 0;
}

void knapsackInitialize()
{
    
}

void initialize()
{
    world[0] = new SunbrellaCorp();
    world[1] = new ComicBookStore();
    world[2] = new SkatePark();
    world[3] = new AbandonedThemePark();
    world[4] = new MubScoutTroop205();
    world[5] = new KrinklyDarHoofsGrave();
    world[6] = new LibraryOfSundries();
    world[7] = new LAFitness();
    
    spideryWorld[0] = new SunbrellaCorp();
    spideryWorld[1] = new ComicBookStore();
    spideryWorld[2] = new SkatePark();
    spideryWorld[3] = new AbandonedThemePark();
    spideryWorld[4] = new MubScoutTroop205();
    spideryWorld[5] = new KrinklyDarHoofsGrave();
    spideryWorld[6] = new LibraryOfSundries();
    spideryWorld[7] = new LAFitness();
    
    bagOfAllTricks[0] = new MagicClock();
    bagOfAllTricks[1] = new SlingShotAndAgSlugs();
    bagOfAllTricks[2] = new EarthCandyBar();
    bagOfAllTricks[3] = new Flashlight();
    bagOfAllTricks[4] = new RabbitsFoot();
    bagOfAllTricks[5] = new Schwankles();
    
    for (int i = 0; i < 8; i++)
    {
//        cout << world[i]->displayLocation() << endl; //used to debug
        world[i]->initialize(world,  false, NULL);
        spideryWorld[i]->initialize(spideryWorld, true, bagOfAllTricks);
        
    }
/*This section needs to be abstracted and randomized*/
    
    world[1]->setPortalStatus(true);
    spideryWorld[3]->setPortalStatus(true);
    spideryWorld[4]->setThurmanStatus(true);
    
    
}

int movementMenu(bool portal, bool item){
    int dir;
    cout << "Enter 0 for knapsack menu" << endl;
    cout << "Enter 1 for up" << endl;
    cout << "Enter 2 for down" << endl;
    cout << "Enter 3 for left" << endl;
    cout << "Enter 4 for right" << endl;
    if (portal)
    {
        cout << "Enter 5 to go through the portal" << endl;
    }
    if (item) {
        cout << "Enter 6 to add this item to your knapsack" << endl;
    }
    
    cin >> dir;
    
    return dir;
}

int knapsackMenu()
{
    int dir;
    cout << "Enter 1 to view knapsack" << endl;
    cout << "Enter 2 to remove item from knapsack" << endl;
    cout << "Enter 3 to use an item from the knapsack" << endl;
    cout << "Enter 0 to exit knapsack menu" << endl;
    cin >> dir;
    return dir;
}

int knapsackDeleteMenu()
{
    int dir;
    cout << "Which item would you like to remove?" << endl;
    cout << "0) None" << endl;
    if (knapsack[0] != NULL) {
        cout << "1) " << knapsack[0]->displayItem() << endl;
    }
    if (knapsack[1] != NULL) {
        cout << "2) " << knapsack[1]->displayItem() << endl;
    }
    if (knapsack[2] != NULL) {
        cout << "3) " << knapsack[2]->displayItem() << endl;
    }
    if (knapsack[3] != NULL) {
        cout << "4) " << knapsack[3]->displayItem() << endl;
    }

    cin >> dir;
    return dir;
}

int knapsackUseMenu()
{
    int dir;
    cout << "Which item would you like to use?" << endl;
    cout << "0) None" << endl;
    if (knapsack[0] != NULL) {
        cout << "1) " << knapsack[0]->displayItem() << endl;
    }
    if (knapsack[1] != NULL) {
        cout << "2) " << knapsack[1]->displayItem() << endl;
    }
    if (knapsack[2] != NULL) {
        cout << "3) " << knapsack[2]->displayItem() << endl;
    }
    if (knapsack[3] != NULL) {
        cout << "4) " << knapsack[3]->displayItem() << endl;
    }
    
    cin >> dir;
    return dir;
}


