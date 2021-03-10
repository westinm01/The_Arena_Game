#ifndef __CHARACTERMENU_CPP__
#define __CHARACTERMENU_CPP__
#include "CharacterMenu.h"
#include "../PlayableCharacterCreation/character.hpp"
using namespace std;

CharacterMenu::CharacterMenu(MenuController* _mc){
    mc = _mc;
}
Character* myCharacter;

void CharacterMenu::printMenu(){
    cout << "\n-= Character Information =-" << endl;
    cout << "Name: " << myCharacter->getName() << endl << endl;
    cout << "- Stats -" << endl;
    //cout << "Image: " ;
    cout << "Rank: " << myCharacter->getRank() << endl;
    cout << "Fight Style: " << myCharacter->getFightStyle() << endl;
//    cout << "Weapon Stats: " << myCharacter->getWeaponStat(int i) << endl;
    cout << "Attack: " << myCharacter->getAttack() << endl;
    cout << "Defense: " << myCharacter->getDefense() << endl;
    cout << "Speical Attack: " << myCharacter->getSpecialAttack() << endl;
    cout << "Speical Defense: " << myCharacter->getSpecialDefense() << endl;
    cout << "Speed: " << myCharacter->getSpeed() << endl;
    cout << "HP: " << myCharacter->getHP() << endl << endl;

    cout << "Enter 1 to go back" << endl;
}

void CharacterMenu::retrieveInput(){
    string choice;
    cin >> choice;

    if (choice == "1") {
	mc->mainMenu->printMenu();
	mc->mainMenu->retrieveInput();
    }
}

#endif
