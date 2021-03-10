#ifndef __CHARACTERMENU_CPP__
#define __CHARACTERMENU_CPP__

#include "CharacterMenu.h"
using namespace std;
CharacterMenu::CharacterMenu(MenuController* _mc){
    mc = _mc;
}

void CharacterMenu::printMenu(){
    cout << "-= Character Menu =-" << endl;
    cout << "1. Name" << endl;
    cout << "2. Back" << endl;
}

void CharacterMenu::retrieveInput(){
    string choice;
    cin >> choice;
    if (choice == "1") {
	cout << "Character name is: " << endl;
    }
    if (choice == "2") {
	mc->mainMenu->printMenu();
	mc->mainMenu->retrieveInput();
    }
}

#endif
