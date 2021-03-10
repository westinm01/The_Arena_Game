#ifndef ATTACK_HPP
#define ATTACK_HPP
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "../PlayableCharacterCreation/character.hpp"
//class Character;
using namespace std;
class Attack{
	string name;
	string description;
	int baseDamage;
	int weaponType;
	int dependency;
	int defensive;
	Character * target;
	Character * user;
	public:
		Attack(){}
		Attack(int baseDamage, int weaponType, int dependency,int defensive){
			this->baseDamage=baseDamage;
			this->weaponType=weaponType;
			this->dependency=dependency;
			this->defensive=defensive;
			this->target=nullptr;
			this->user=nullptr;
		}
		string getName(){return name;}
		string getDescription(){return description;}
		int getBaseDamage(){return baseDamage;}
		int getWeaponType(){return weaponType;}
		int getDependency(){return dependency;}
		void setName(string name){ this->name=name;}
		void setDescription(string description){this->description=description;}
		void setBaseDamage(int baseDamage){this->baseDamage=baseDamage;}
		void setWeaponType(int weaponType){this->weaponType=weaponType;}
		void setDependency(int dependency){this->dependency=dependency;}
		void setDefensive(int defensive){this->defensive=defensive;}
		virtual void attackBehavior()=0;
		void setTarget(Character* target){this->target=target;}
		Character * getTarget(){return target;}
		Character * getUser(){return user;}
		void setUser(Character* user){this->user=user;}
		int dealDamage(){
			
			int damage=((2*(user->getRank())/3+2)*baseDamage*(user->getStat(dependency-1))*(target->getStat(defensive-1))/50)+2;
			for(int i=0; i < user->getItemsSize();i++){
				if(user->getItem(i)->getItemType()==weaponType){
					damage=damage*1.5;
					break;
				}
			}
			srand(time(NULL));
			int crit=rand()%15;
			if(crit==0){
				damage=damage*1.5;
			}
			double admittance=(rand()%15+85)/100;
			damage=damage*admittance;
			target->setBattleHealth( target->getBattleHealth()-damage);//deals actual damage
			cout<<target->getName()<<" took "<<damage<< "damage!"<<endl;
			return damage;
		}	
		void statChange(int stat, int stage){
			if( stage<0){
				if(target->getStage(stat-1)<=-6){
					cout<<"It can't go lower!"<<endl;
					return;}
				else if(target->getStage(stat-1)+stage>=-6){
					while(target->getStage(stat-1)+stage>-6){
						stage++;
					}
					target->setStat(stat-1,target->getStat(stat-1)*stage*3/2);
					target->setStage(stat-1,6);
				}
				else{
					target->setStat(stat-1,target->getStat(stat-1)*stage*3/2);
					target->setStage(stat-1,target->getStage(stat-1)+stage);
				}
			}
			if( stage>0){
				if(user->getStage(stat-1)>=6){
					return;
				}
			else if(user->getStage(stat-1)+stage>=6){
				while (user->getStage(stat-1)+stage>6){
					stage--;
				}
				user->setStat(stat-1,user->getStat(stat-1)*stage*3/2);
				user->setStage(stat-1,6);
			}
			else{
			 	user->setStat(stat-1,user->getStat(stat-1)*stage*3/2);
                         	user->setStage(stat-1,user->getStage(stat-1)+stage);
			}}
		}
			
		void inflictStatusAilment(int status,int chance){
			string statusMessage [6];
			statusMessage[0]="confused";
			statusMessage[1]="paralyzed";
			statusMessage[2]="asleep";
			statusMessage[3]="frozen";
			statusMessage[4]="poisoned";
			statusMessage[5]="burned";
			statusMessage[6]="cursed";
			if(target->getStatus()!=0){
				return;
			}
			else{
				srand(time(NULL));
				int odds=rand()%100;
				if(odds<chance){
					target->setStatusAilment(status);
					cout<<target->getName()<< " is now " << statusMessage[status-1]<<"!"<<endl;
				}
				else{
					return;
				}
			}
		}
		void heal(int amount){
			user->setBattleHealth(amount+user->getBattleHealth());
		}
};
#endif
