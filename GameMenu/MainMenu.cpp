#ifndef __MAINMENU_CPP__
#define __MAINMENU_CPP__
#include "MenuController.h"

MainMenu::MainMenu(MenuController* _mc) {
    mc = _mc;
}

void MainMenu::printMenu() {
    cout << "-= Main Menu =-" << endl;
    cout << "1. Inventory" << endl;
    cout << "2. Character" << endl;
    cout << "3. Shop" << endl;
    cout << "4. Settings" << endl;
    cout << "5. Quit Game" << endl;
}

void MainMenu::retrieveInput() {
    string choice;
    cin >> choice;
    if (choice == "1") {
//        inventory();
    }
    if (choice == "2") {
//        character();
    }
    if (choice == "3") {
//        shop();
    }
    if (choice == "4") {
        mc->settings->printMenu();
        mc->settings->retrieveInput();
    }
    if (choice == "5") {
        return;
    }
}

#endif
