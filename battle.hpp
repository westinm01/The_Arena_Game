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
		bool battleOver;
		while(hero->getStat(5)!=0 || foe->getStat(5)!=0||battleOver==false){//While both characters are above 0 health
			cout<<"Turn "<<turnNumber<<":"<<endl
			cout<<hero->getName()<<"'s health: " << hero->getBattleHealth()<<" HP"<<endl;
			cout<<foe->getName()<<"'s health: " <<foe->getBattleHealth()<<" HP"<<endl;
			if(hero->getStat(4)>foe->getStat(4)){//Speed Check
				characterOrder.push(hero);
				characterOrder.push(foe);
			}
			else{
				characterOrder.push(foe);
				characterOrder.push(hero);
			}
			for(int i=0;i<2;i++){
				if(characterOrder.front()=hero){
					while(hasAttacked==false){		
						string option=displayOptions();
						hasAttacked=performOption(hero,foe,option);
						//checkAbilities();
					}
					characterOrder.pop();
				}
				else{
					srand(time(NULL));
					int rando=rand()%4;
					string foeOption=rando;
					performOption(foe,hero,option);
					//checkAbilities();
					characterOrder.pop();
				}
				cout<<hero->getName()<<"'s health: " << hero->getBattleHealth()<<" HP"<<endl;
                       		 cout<<foe->getName()<<"'s health: " <<foe->getBattleHealth()<<" HP"<<endl;

				if(hero->getStat(5)==0 || foe->getStat(5)==0){
					battlOver=true;
					break;
				}
			}
			endOfTurnEffects();	
		}
	}
	string displayOptions(){
		cout<<"Choose a move: "<<endl;
		cout<<"1) "<<hero->getAttack(0) <<"\t2) " hero->getAttack(1)<<endl;
		cout<<"3) " <<hero->getAttack(2) << "\t4) " hero->getAttack(3)<<endl;
		string choice;
		cin>>choice;
		
		return choice;
	}
	bool performOption(Character* user, Character * target, string option){
		int op=stoi(option);
		if(op<0 || op>5){
			return false;
		}
		Attack * ak=user->GetAttack(op-1);
		ak->setTarget(target);
		ak->setUser(user);
		ak->AttackBehavior();
		return true;
	}
	void endOfTurnEffects(){
		if(hero->getStatus()==3){
			hero->setBattleHealth(hero->getBattleHealth()-5);
		}
		if(foe->getStatus()==3){
			foe->setBattleHealth(foe->getBattleHealth()-5);
		}
		if(hero->getStatus()==6){
			hero->setBattleHealth(hero->getBattleHealth()-hero->getHealth()/4);
		}
		if(foe->getStatus()==6){
			foe->setBattleHealth(foe->getBattleHealth()-foe->getHealh()/4);
		}
	}
	
};
#endif
