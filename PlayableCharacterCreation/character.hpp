#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <iostream>
#include <fstream>

#include <vector>
#include <utility>
#include "../AbilityItem/ability.hpp"
#include "../AbilityItem/item.hpp"

//#include "../Attacks/attack.hpp"

using namespace std;

class Character{
	string name;
	string fightStyle;
	int baseStats[6];
	char weaponStats[8];
	int health;
	vector<Item*>equippedItems;
	int rank;

	//Attack[4]attacks;
	Ability* uniqueAbility;

	//vector <Attack*> attacks;
	//Ability uniqueAbility;

	int statusAilment;
	Item* hand;
	bool holdingItem;
	const char* imageFilePath;
	int money = 0;
	public:
	Character(){
		rank=1;
	}
	void setBaseStats(int atk, int def, int spatk, int spdef,int spd, int hp){
		baseStats[0]=atk;
		baseStats[1]=def;
		baseStats[2]=spatk;
		baseStats[3]=spdef;
		baseStats[4]=spd;
		baseStats[5]=hp;
		setHealth();
	}
	void setStat(int stat, int change){
		baseStats[stat] = change;
	}
	void setWeaponStats(char sword, char dagger, char lance, char fists, char nunchuck, char staff, char star, char shield){
		weaponStats[0]=sword;
		weaponStats[1]=dagger;
		weaponStats[2]=lance;
		weaponStats[3]=fists;
		weaponStats[4]=nunchuck;
		weaponStats[5]=staff;
		weaponStats[6]=star;
		weaponStats[7]=shield;
	}
	
	void addItem(Item* i){
		if(equippedItems.size() != 3){
			equippedItems.push_back(i);
		} else {
			cout << "You've reached max # of items!" << endl;
		}
	}
	void setName(string specifiedName){
		name=specifiedName;
	}

	void setHealth(){
		health= baseStats[5]*4;
	}
	//void setAttack(Attack *move){
	//	attacks.push_back(move);
	//}
	void setBattleHealth(int hp){
		health=hp;
	}
	int getBattleHealth(int hp){
		return health;
	}
	void setStatusAilment(int ailment){
		statusAilment=ailment;
	}
	void setFightStyle(string style){
		fightStyle=style;
	}
	void setImageFilePath(const char*  x){
		imageFilePath=x;
	}
	const char* getImageFilePath(){
		return imageFilePath; 
	}
	void setAbility(Ability* a){
		uniqueAbility = a;
	}
	void setMoney(int gold){
		money = gold;
	}
	bool isHolding(){
		return holdingItem;
	}

	void equipItem(int choice){
		int index = choice - 1;
		
			if(equippedItems.size() != 0){
				Item* item = equippedItems.at(index);
					for (int i = 0; i < item->effect.size(); i++){
						int location = item->effect.at(i).first;
						int change = baseStats[location] + item->effect.at(i).second;
						setStat(location, change);
						hand = equippedItems.at(index);
					}
					holdingItem = true;
					cout << "Equipped " << item->getName() << endl;
			} else {
				cout << "You have no items to equip!" << endl;
			
		}
	}
	
	void unequipItem(int choice){
		int index = choice - 1;
		
			if(equippedItems.size() != 0){
				Item* item = equippedItems.at(index);
					for(int i = 0; i < item->effect.size(); i++){
						int location = item->effect.at(i).first;
						int change = baseStats[location] - item->effect.at(i).second;
						setStat(location, change);
						hand = NULL;
					}
				holdingItem = false;
				cout << "Unequipped " <<  item->getName() << endl;
				cout << endl;
			}
		
	}

	void deleteItem(int choice){
		int index = choice - 1;
			if(equippedItems.size() != 0) {
				cout << "You have dropped the " << equippedItems.at(index)->getName() << "." << endl;
				equippedItems.erase(equippedItems.begin() + index);
				cout << endl;
			}
	} 	


	string getName(){
		return name;
	}
	int getRank(){
		return rank;
	}
	int getMoney(){
		return money;
	}
	string getFightStyle(){
		return fightStyle;
	}
	char getWeaponStat(int i){
	        return weaponStats[i];
	}
	int getAttack(){
		return baseStats[0];
	}
	int getDefense(){
		return baseStats[1];
	}
	int getSpecialAttack(){
		return baseStats[2];
		
	}
	int getSpecialDefense(){
		return baseStats[3];
		
	}
	int getSpeed(){
		return baseStats[4];
	}
	int getHP(){
		return baseStats[5];
	}

	Ability* getAbility(){
		return uniqueAbility;
	}
	Item* getItem(int num){
		return equippedItems.at(num - 1);
	}
	Item* getHand(){
		return hand;
	}
	vector<Item*> getItems(){
		return equippedItems;
	}
	void showItems(){
		if(equippedItems.size() != 0){
			for (int i = 0; i < equippedItems.size(); i++){
				Item* stash = equippedItems.at(i);
				cout << i + 1 << ". " << stash->getName() << endl;
			}
		}else{
			cout << "You have no items in your inventory!" << endl;
		}
	}

	void showAbility(){
		cout << "Name: " << uniqueAbility->getName() << endl;
		cout << "Description: " << uniqueAbility->getDescription() << endl;

	int getStat(int stat){
		return stat;

	}
	virtual void display()=0;
	
};
#endif
