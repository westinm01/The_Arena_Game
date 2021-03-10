#ifndef __ITEM_MAIN_CPP__
#define __ITEM_MAIN_CPP__

#include "AbilityItem/item.hpp"
#include "PlayableCharacterCreation/character.hpp"
#include "PlayableCharacterCreation/characterFactory.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){       
	CharacterFactory *factory=new CharacterFactory();
        Character* mainCharacter;
       
        mainCharacter=factory->makeCharacter("3");
	delete factory;

	cout << "You have chosen " << mainCharacter->getName() << "." << endl;

	mainCharacter->addItem(new HSword(mainCharacter));
	
	cout << "You have the "	<< mainCharacter->getItem(1)->getName() << "." << endl;
		
	cout << "--== INVENTORY ==--" << endl;
	mainCharacter->showItems();
        return 0;
}

#endif
