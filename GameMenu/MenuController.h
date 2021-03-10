#ifndef __MENUCONTROLLER_H__
#define __MENUCONTROLLER_H__

#include "MainMenu.h"
#include "Settings.h"
#include "CharacterMenu.h"

class MenuController {
public:
    MainMenu* mainMenu = new MainMenu(this); 
    Settings* settings = new Settings(this);
    CharacterMenu* characterMenu = new CharacterMenu(this);
    ~MenuController(){
	delete mainMenu;
	delete settings;
	delete characterMenu;
    }  
};

#endif
