#ifndef __MENUMAIN_CPP__
#define __MENUMAIN_CPP__
#include <iostream>
#include "MenuController.h"
#include "Settings.cpp"
#include "MainMenu.cpp"
#include "CharacterMenu.cpp"
#include "../PlayableCharacterCreation/character.hpp"
#include "../PlayableCharacterCreation/characterFactory.hpp"

using namespace std;

int main() {

    Character* mainCharacter = new Revvin();
	mainCharacter->addItem(new HSword());
	mainCharacter->addItem(new NNun());
	mainCharacter->equipItem(1);


    MenuController* mc = new MenuController();
    mc->mainMenu->printMenu();
    mc->mainMenu->retrieveInput(mainCharacter);
    
    delete mc;

    return 0;
}

#endif
