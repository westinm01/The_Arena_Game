#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
using namespace std;

class Character{
	string name;
	string fightStyle;
	int baseStats[6];
	char weaponStats[8];
	int health;
	//Item[3] equippedItems;
	int rank;
	//Attack[4]attacks;
	//Ability uniqueAbility;
	int statusAilment;
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
		setHealth(baseStats[5]);
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
	void setName(string specifiedName){
		name=specifiedName;
	}
	void setHealth(int hp){
		health=hp*4;
	}
	void setStatusAilment(int ailment){
		statusAilment=ailment;
	}
	void setFightStyle(string style){
		fightStyle=style;
	}
	string getName(){
		return name;
	}
	int getRank(){
		return rank;
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
	//virtual void display()=0;
};
#endif