#ifndef BATTLE_HPP
#define BATTLE_HPP
#include <vector>
#include <string>
#include "PlayableCharacterCreation/character.hpp"
#include "Attacks/attack.hpp"
#include "item.hpp"
using namespace std;

class Battle{
	int turnNumber;
	Character * hero;
	Character * foe;
	int heroInitialStats[6];
	int foeInitialStats[6];
	vector<Item> heroInitialItems;
	vector<Item> foeInitialItems;
	bool enemyCrit;
	bool heroCrit;
	bool foeHasLoweredStat;
	bool heroHasLoweredStat;
	bool foeHasIncreasedStat;
	bool heroHasIncreasedStat;
	bool lastFoeAttackType;
	bool lastHeroAttackType;
	bool hitSelf;
	bool enemyAttacked;
	bool heroAttacked;
	bool isAttackCritical;


	Battle(Character*hero,Character*foe){
		this->hero=hero;
		this->foe=foe;
		for(Item i:hero->getItems()){
			heroInitialItems.push_back(i);
		}
		for(Item i:foe->getItems()){
			foeInitialItems.push_back(i);
		}
		for(int i=0;i<6;i++){
			heroInitialStats[i]=foe->getStat[i];
			forInitialStats[i]=foe->getStat(i);
		}
	}
	void battleCommence(){
		queue <Character*> characterOrder;
		bool hasAttacked;
		while(hero->getStat(5)!=0 || foe->getStat(5)!=0){//While both characters are above 0 health
			if(hero->getStat(4)>foe->getStat(4)){//Speed Check
				characterOrder.push(hero);
				characterOrder.push(foe);
			}
			else{
				characterOrder.push(foe);
				characterOrder.push(hero);
			}
			for(int i=0;i<2;i++){
				if(characterOrdere.front()=hero){
					while(hasAttacked==false){		
						string option=displayOptions();
						hasAttacked=performOption(hero,foe,option);
						//checkAbilities();
					}
				}
				else{
					int rando=rand()%4;
					string foeOption=stoi(rando);
					performOption(foe,hero,option);
					//checkAbilities();
				}
			}
		}
};
#endif
