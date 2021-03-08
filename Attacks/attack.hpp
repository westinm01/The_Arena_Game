#ifndef ATTACK_HPP
#define ATTACK_HPP
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;
class Attack{
	string name;
	string description;
	int baseDamage;
	int weaponType;
	int dependency;
	Character * target;
	Character * user;
	public:
		Attack(int baseDamage, int weaponType, int dependency){
			this->baseDamage=baseDamage;
			this->weaponType=weaponType;
			this->dependency=dependency;
		}
		string getName(){return name;}
		string description(){return description;}
		int getBaseDamage(){return baseDamage;}
		int getWeaponType(){return weaponType;}
		int getDependency(){return dependency;}
		void setName(string name){ this->name=name;}
		void setDescription(string description){this->description=description;}
		void setBaseDamage(int baseDamage){this->baseDamage=baseDamage;}
		void setWeaponType(int weaponType){this->weaponType=weaponType;}
		void setDependency(int dependency){this->dependency=dependency;}
		virtual void attackBehavior()=0;
		void setTarget(Character* target){this->target=target};
		void setUser(Character* user){this->user=user;};A
		int dealDamage(){
			
			int damage=((2*user->getRank()/3+2)*baseDamage*user->getStat(0)*target->getStat(1)/50)+2;
			for(Item i : user->getItems()){
				if(i.getType()=weaponType){
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
			return damage;
		}	
			
};
#endif
