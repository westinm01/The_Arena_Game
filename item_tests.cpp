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

TEST(ItemTest, FullTest){
	Character* c = new Winelle();
	c->addItem(new HSword());
	c->addItem(new SilShield());
	c->addItem(new NNun());

	EXPECT_EQ(c->getItem(1)->getName(), "Holy Sword");
	EXPECT_EQ(c->getItem(2)->getPrice(), 80);
	EXPECT_EQ(c->getItem(3)->getItemType(), 5);
}


#endif
