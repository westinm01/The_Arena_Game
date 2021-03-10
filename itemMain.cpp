#ifndef __ITEM_MAIN_CPP__
#define __ITEM_MAIN_CPP__

#include "AbilityItem/item.hpp"
#include "PlayableCharacterCreation/character.hpp"
#include "PlayableCharacterCreation/characterFactory.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Character;
int main(){       
	CharacterFactory *factory=new CharacterFactory();
        Character* mainCharacter;
       
        mainCharacter=factory->makeCharacter("3");
	delete factory;

	cout << "You have chosen " << mainCharacter->getName() << "." << endl;

	mainCharacter->addItem(new GShield());
	mainCharacter->addItem(new HSword());
	mainCharacter->addItem(new LTrinket());

	cout << endl;
	cout << "Initial Health: " << mainCharacter->getHP() << endl;
	cout << "Initial Attack: " << mainCharacter->getAttack() << endl;
	cout << endl;
	cout << "--== INVENTORY ==--" << endl;
	mainCharacter->showItems();
	int choice;

	cout << endl;
	cout << "Select an item to equip:" << endl;
	cin >> choice;

	mainCharacter->equipItem(choice);

	mainCharacter->setHealth();

	cout << "You have selected: " << mainCharacter->getItem(choice)->getName() << endl;
	cout << "You receive: " << mainCharacter->getItem(choice)->getDesc() << endl;
	cout << endl;

	cout << "Final Health: " << mainCharacter->getHP() << endl;
	cout << "Final Attack: " << mainCharacter->getAttack() << endl;

	cout << endl;

	cout << "Unequipping..." << endl;

	mainCharacter->unequipItem(choice);

	mainCharacter->setHealth();

	cout << endl;

	cout << "Final Health: " << mainCharacter->getHP() << endl;
	cout << "Final Attack: " << mainCharacter->getAttack() << endl;

	cout << endl;
	
	cout << "Dropping... " << endl;

	mainCharacter->deleteItem(choice);

	cout << endl;
	mainCharacter->showItems();
	
        return 0;
}

#endif
