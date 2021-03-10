#include "MainMenu.h"
#include "Settings.h"

class MenuController {
public:
    MainMenu* mainMenu = new MainMenu(this);
    Settings* settings = new Settings(this);
};
