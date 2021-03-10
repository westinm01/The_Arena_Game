#ifndef __MAINMENU_H__
#define __MAINMENU_H__
#include <iostream> 
using namespace std; 

class Character;
class MainMenu {
public:
    class MenuController* mc;
    MainMenu(MenuController* _mc);
  
    void printMenu();
    void retrieveInput(Character* c);
};

#endif
