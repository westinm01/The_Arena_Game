#ifndef __ABILITY_TESTS_CPP__
#define __ABILITY_TESTS_CPP__

#include "gtest/gtest.h"
#include "AbilityItem/ability.hpp"
#include <iostream>
#include <string>

using namespace std;

TEST(AbilityTest, ChivTest){       
	Ability* abil = new ChivShield();

        EXPECT_EQ(abil->getName(), "Chivalrous Shield"); 
}

TEST(AbilityTest, NightmareTest){
	Ability* abil = new Nightmare();

	EXPECT_EQ(abil->getDescription(), "Attacking a sleeping target deals twice the damage.");
} 

TEST(AbilityTest, MoDTest){
	Ability* abil = new MoD();

	EXPECT_EQ(abil->getName(), "Master of Deception");
	EXPECT_EQ(abil->getDescription(), "Every time a turn passes where Tuckson does not lose HP, his spatk and speed are boosted by 1 stage.");

}



#endif

