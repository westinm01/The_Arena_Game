#ifndef __ITEM_TESTS_CPP__
#define __ITEM_TESTS_CPP__

#include "gtest/gtest.h"
#include "AbilityItem/ability.hpp"
#include "AbilityItem/item.hpp"
#include "PlayableCharacterCreation/character.hpp"
#include "PlayableCharacterCreation/characterFactory.hpp"
#include <iostream>
#include <string>

using namespace std;

TEST(ItemTest, SLanceTest){  

     	Character* mainCharacter;
	CharacterFactory *factory=new CharacterFactory();
        
        mainCharacter=factory->makeCharacter("1");
	cout << "Initial health: " << mainCharacter->getHP() << endl;
	
	mainCharacter->addItem(new SLance(mainCharacter));
	
	mainCharacter->equippedItems.at(1)->itemBehavior();

	cout << "Final health: " << mainCharacter->getHP() << endl;

        EXPECT_EQ(mainCharacter->showItem(1), "Standard Lance\n30");
	 
}

#endif
