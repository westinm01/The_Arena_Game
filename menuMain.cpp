#ifndef __MENU_MAIN_CPP__
#define __MENU_MAIN_CPP__

#include "AbilityItem/item.hpp"
#include "PlayableCharacterCreation/character.hpp"
#include "PlayableCharacterCreation/characterFactory.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "myMenus/inventory.hpp"
using namespace std;
class Character;

int main(){

	Character* mainCharacter = new Revvin();

	mainCharacter->addItem(new HSword());
	mainCharacter->addItem(new SLance());
	mainCharacter->addItem(new SerLance());

	mainCharacter->equipItem(1);

	Inventory* inven = new Inventory();

	inven->menuFunc(mainCharacter);





	return 0;
}
#endif
