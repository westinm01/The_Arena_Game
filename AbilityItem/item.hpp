#ifndef __ITEM_HPP__
#define __ITEM_HPP__

#include "../PlayableCharacterCreation/character.hpp"
#include <iostream>
#include <string>

using namespace std;

class Item{
	protected:
		std::string name;
		int itemType;
		int price;
		Character* playerChar;
	public:
		Item(){}

		Item(Character* player){
			playerChar = player;
		}

		virtual ~Item(){delete playerChar;}

		std::string getName(){return name;}
		int getPrice(){return price;}
		int getItemType(){return itemType;}

		virtual void itemBehavior() = 0;
};

class SLance: public Item{
	public:
		SLance(Character* player) : Item(player){
			name = "Standard Lance";
			itemType = 3;
			price = 30;
		}
	
		virtual void itemBehavior(){
			playerChar->setStat(0, playerChar->getAttack() + 4);
			int newHealth = playerChar->getHP() + 1;
			playerChar->setStat(5, newHealth);
			playerChar->setHealth(newHealth);
		}	
};
#endif
