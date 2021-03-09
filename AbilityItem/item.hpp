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
		SLance(): Item(){
			name = "Standard Lance";
			itemType = 3;
			price = 30;
		}
		SLance(Character* player) : Item(player){
			name = "Standard Lance";
			itemType = 3;
			price = 30;
		}
	
		virtual void itemBehavior(){
/*
			playerChar->setStat(0, playerChar->getStat(0) + 4);
			int newHealth = playerChar->getStat(5) + 1;
			playerChar->setStat(5, newHealth);
			playerChar->setHealth(newHealth);
*/
		}
	
};


class SStaff: public Item{
	public:
		SStaff():Item(){
			name = "Standard Staff";
			itemType = 6;
			price = 40;
		}

		SStaff(Character* player) : Item(player){
			name = "Standard Staff";
			itemType = 6;
			price = 40;
		}
	
		virtual void itemBehavior(){

		}	
};

class SNun: public Item{
	public:
		SNun():Item(){
			name = "Standard Nunchucks";
			itemType = 5;
			price = 30;
		}

		SNun(Character* player) : Item(player){
			name = "Standard Staff";
			itemType = 5;
			price = 30;
		}
	
		virtual void itemBehavior(){

		}	
};

class SShield: public Item{
	public:
		SShield():Item(){
			name = "Standard Shield";
			itemType = 8;
			price = 30;
		}

		SShield(Character* player) : Item(player){
			name = "Standard Shield";
			itemType = 8;
			price = 30;
		}
	
		virtual void itemBehavior(){

		}	
};

class SDagg: public Item{
	public:
		SDagg():Item(){
			name = "Standard Dagger";
			itemType = 2;
			price = 25;
		}

		SDagg(Character* player) : Item(player){
			name = "Standard Dagger";
			itemType = 2;
			price = 25;
		}
	
		virtual void itemBehavior(){

		}	
};

class SSword: public Item{
	public:
		SSword():Item(){
			name = "Standard Sword";
			itemType = 1;
			price = 25;
		}

		SSword(Character* player) : Item(player){
			name = "Standard Sword";
			itemType = 1;
			price = 25;
		}
	
		virtual void itemBehavior(){

		}	
};

class SGaunt: public Item{
	public:
		SGaunt():Item(){
			name = "Standard Gauntlets";
			itemType = 4;
			price = 25;
		}

		SGaunt(Character* player) : Item(player){
			name = "Standard Gauntlets";
			itemType = 4;
			price = 25;
		}
	
		virtual void itemBehavior(){

		}	
};

class BStar: public Item{
	public:
		BStar():Item(){
			name = "Burning Star";
			itemType = 7;
			price = 60;
		}

		BStar(Character* player) : Item(player){
			name = "Burning Star";
			itemType = 7;
			price = 60;
		}
	
		virtual void itemBehavior(){

		}	
};

class HNun: public Item{
	public:
		HNun():Item(){
			name = "Heavy Nunchucks";
			itemType = 5;
			price = 70;
		}

		HNun(Character* player) : Item(player){
			name = "Heavy Nunchucks";
			itemType = 5;
			price = 70;
		}
	
		virtual void itemBehavior(){

		}	
};

class StrLance: public Item{
	public:
		StrLance():Item(){
			name = "Strong Lance";
			itemType = 3;
			price = 65;
		}

		StrLance(Character* player) : Item(player){
			name = "Strong Lance";
			itemType = 3;
			price = 65;
		}
	
		virtual void itemBehavior(){

		}	
};

class PStaff: public Item{
	public:
		PStaff():Item(){
			name = "Pixie Staff";
			itemType = 6;
			price = 75;
		}

		PStaff(Character* player) : Item(player){
			name = "Pixie Staff";
			itemType = 6;
			price = 75;
		}
	
		virtual void itemBehavior(){

		}	
};

class SilShield: public Item{
	public:
		SilShield():Item(){
			name = "Silver Shield";
			itemType = 8;
			price = 80;
		}

		SilShield(Character* player) : Item(player){
			name = "Silver Shield";
			itemType = 8;
			price = 80;
		}
	
		virtual void itemBehavior(){

		}	
};

class SilSword: public Item{
	public:
		SilSword():Item(){
			name = "Silver Sword";
			itemType = 1;
			price = 70;
		}

		SilSword(Character* player) : Item(player){
			name = "Silver Sword";
			itemType = 1;
			price = 70;
		}
	
		virtual void itemBehavior(){

		}	
};

class TDagg: public Item{
	public:
		TDagg():Item(){
			name = "Thief Dagger";
			itemType = 2;
			price = 70;
		}

		TDagg(Character* player) : Item(player){
			name = "Thief Dagger";
			itemType = 2;
			price = 70;
		}
	
		virtual void itemBehavior(){

		}	
};
#endif
