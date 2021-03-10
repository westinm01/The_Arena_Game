#ifndef BATTLE_HPP
#define BATTLE_HPP
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <queue>
#include <iostream>
#include "PlayableCharacterCreation/character.hpp"
#include "Attacks/attack.hpp"
#include "AbilityItem/item.hpp"
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

	public:
	int winner;
	Battle(Character*hero,Character*foe){
		this->hero=hero;
		this->foe=foe;
		//for(Item i:hero->getItems()){
		//	heroInitialItems.push_back(i);
		//}
		//for(Item i:foe->getItems()){
		//	foeInitialItems.push_back(i);
		//}
		for(int i=0;i<6;i++){
			heroInitialStats[i]=hero->getStat(i);
			foeInitialStats[i]=foe->getStat(i);
		}
		turnNumber=1;
	}
	void battleCommence(){
		queue <Character*> characterOrder;
		bool hasAttacked;
		bool battleOver;
		while(hero->getStat(5)!=0 || foe->getStat(5)!=0||battleOver==false){//While both characters are above 0 health
			cout<<"Turn "<<turnNumber<<":"<<endl;
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
					hasAttacked=false;
					characterOrder.pop();
				}
				else{
					srand(time(NULL));
					int rando=rand()%4;
					string foeOption=to_string(rando);
					
					performOption(foe,hero,foeOption);
					//checkAbilities();
					characterOrder.pop();
				}
				cout<<hero->getName()<<"'s health: " << hero->getBattleHealth()<<" HP"<<endl;
                       		 cout<<foe->getName()<<"'s health: " <<foe->getBattleHealth()<<" HP"<<endl;

				if(hero->getStat(5)==0 || foe->getStat(5)==0){
					battleOver=true;
					break;
				}
			}
			endOfTurnEffects();
			turnNumber++;	
		}
		if(foe->getStat(5)==0){
			cout<< "You win!"<<endl;
			hero->setRank(hero->getRank()+1);
			cout<<hero->getName()<<"is now rank "<<hero->getRank()<<"!"<<endl;
			cout<<"You have earned "<<50*hero->getRank()/2<<" gold!"<<endl;
			//hero->addMoney(50*rank/2);
			winner=0;
		}
		else{
			winner=1;
			cout<<"You have lost."<<endl;
			cout<<"Game over"<<endl;
		}
		for(int i =0; i<6;i++){
			foe->setStat(i,foeInitialStats[i]);
			hero->setStat(i,heroInitialStats[i]);
		}
		hero->setStatusAilment(0);
		foe->setStatusAilment(0);
		hero->setHealth();
		foe->setHealth();
	}
	string displayOptions(){
		cout<<"Choose a move: "<<endl;
		cout<<"1) "<<hero->getAttack(0)->getName() <<"\t2) " <<hero->getAttack(1)->getName()<<endl;
		cout<<"3) " <<hero->getAttack(2)->getName() << "\t4) "<< hero->getAttack(3)->getName()<<endl;
		string choice;
		cin>>choice;
		
		return choice;
	}
	bool performOption(Character* user, Character * target, string option){
		int op=stoi(option);
		if(op<0 || op>5){
			return false;
		}
		if(checkStatus(user)==1){
			return true;
		}
		Attack * ak=user->getAttack(op-1);
		ak->setTarget(target);
		ak->setUser(user);
		ak->attackBehavior();
		cout<<user->getName()<<" used "<< ak->getName()<<"!"<<endl;
		return true;
	}
	int checkStatus(Character* user){
		if(user->getStatus()==0){
			return 0;
		}
		if(user->getStatus()==1){
			srand(time(NULL));
			int hitMyself=rand()%4;
			
			if(hitMyself==0){
				cout<<user->getName()<<" got hurt from confusion!"<<endl;
				user->setBattleHealth(user->getHealth()-6);
				cout<<user->getName()<<" received 6 damage!"<<endl;
				return 1;
			}
			if(hitMyself==1){
				cout<<user->getName()<<" is not confused anymore!"<<endl;
				user->setStatusAilment(0);
				return 0;
			}
			
		}
		if(user->getStatus()==2){
			srand(time(NULL));
			int paralysis=rand()%3;
			if(paralysis==2){
				cout<<user->getName()<<" was paralyzed and couldn't move!"<<endl;
				return 1;
			}
		}
		if(user->getStatus()==3){
			srand(time(NULL));
			int asleepChance=rand()%5;
			if(asleepChance==0){
				cout<<user->getName()<<" woke up!"<<endl;
				user->setStatusAilment(0);
				return 0;
			}
			else{
				cout<<user->getName()<<" is fast asleep..."<<endl;
				return 1;
			}
		}
		return 0;
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
			foe->setBattleHealth(foe->getBattleHealth()-foe->getHealth()/4);
		}
	}
	
};
#endif
