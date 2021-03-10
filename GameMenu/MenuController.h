#ifndef __MENUCONTROLLER_H__
#define __MENUCONTROLLER_H__

#include "MainMenu.h"
#include "Settings.h"

class MenuController {
public:
    MainMenu* mainMenu = new MainMenu(this);
    Settings* settings = new Settings(this);
};

#endif
