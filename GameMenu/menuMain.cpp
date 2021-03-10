#ifndef __MENUMAIN_CPP__
#define __MENUMAIN_CPP__
#include <iostream>
#include "MenuController.h"
#include "Settings.cpp"
#include "MainMenu.cpp"

using namespace std;

int main() {

    MenuController* mc = new MenuController();
    mc->mainMenu->printMenu();
    mc->mainMenu->retrieveInput();
    
    delete mc;

    return 0;
}

#endif
