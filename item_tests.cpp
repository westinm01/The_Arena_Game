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
	
	Item* i = new SLance();

        EXPECT_EQ(i->getPrice(), 30);
	EXPECT_EQ(i->getItemType(), 3);
	EXPECT_EQ(i->getName(), "Standard Lance"); 
}

TEST(ItemTest, TDaggTest){
	Character* c = new Vlad();
	c->addItem(new TDagg());

	EXPECT_EQ(c->getItem(1)->getName(), "Thief Dagger");
	
}



#endif
