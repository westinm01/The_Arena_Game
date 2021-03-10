#ifndef __SHOP_MAIN_CPP__
#define __SHOP_MAIN_CPP__

#include "AbilityItem/item.hpp"
#include "PlayableCharacterCreation/character.hpp"
#include "PlayableCharacterCreation/characterFactory.hpp"
#include "myMenus/shop.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Character;

int main(){

	Character* mainCharacter = new Revvin();
	mainCharacter->addItem(new HSword());
	mainCharacter->equipItem(1);

	Shop* shop = new Shop();
	shop->printMenu();

	return 0;
}
#endif
