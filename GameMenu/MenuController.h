#ifndef __MENUCONTROLLER_H__
#define __MENUCONTROLLER_H__

#include "MainMenu.h"
#include "Settings.h"
//#include "../myMenus/inventory.hpp"
//#include "../myMenus/shop.hpp"
//#include "../PlayableCharacterCreation/character.hpp"
#include "CharacterMenu.h"

class Inventory;
class Shop;
class MenuController {
public:
    MainMenu* mainMenu = new MainMenu(this); 
    Settings* settings = new Settings(this);
    Inventory* inventory = new Inventory(this);
    Shop* shop = new Shop(this);
    CharacterMenu* characterMenu = new CharacterMenu(this);
    

    ~MenuController(){
	delete mainMenu;
	delete inventory;
	delete shop;
	delete settings;
	delete characterMenu;
    }  
};

#endif
