#ifndef __SETTINGS_CPP__
#define __SETTINGS_CPP__

#include "MenuController.h"

Settings::Settings(MenuController* _mc) {
    mc = _mc;
}

void Settings::printMenu() {
    cout << "-= Settings =-" << endl;
    cout << "1. Difficulty" << endl;
    cout << "2. Back" << endl;
}

void Settings::retrieveInput() {
    string choice;
    cin >> choice;
    if (choice == "1") {
        //hardness();
        cout << "hardness" << endl;  //DELETE LATER
    }
    if (choice == "2") {
        //back();
        cout << "selected back\n";
        mc->mainMenu->printMenu();
        mc->mainMenu->retrieveInput();
    }
}

#endif
