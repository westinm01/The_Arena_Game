#ifndef ENHANCEATTACK_HPP
#define ENHANCEATTACK_HPP
#include "attack.hpp"
#include <string>
using namespace std;
class EnhanceAttack: public Attack{
	int stat;
	int stage;
	public:
		EnhanceAttack(int stat,int stage){
		this->setBaseDamage(0);
		this->setWeapontype(0);
		this->setDependency(0);
		this->stat=stat;
		this->stage=stage;
		}
		int getStat(){return stat;}
		int getStage(){return stage;};
		void setStat(int stat){this->stat=stat};
		void setStage(int stage){this->stage=stage};
		virtual void AttackBehavior(Character hero){
			string statNames [6];
			statNames[0]="Attack";
			statNames[1]="Defense";
			statNames[2]="Special Attack";
			statNames[3]="Special Defense";
			statNames[4]="Speed";
			statNames[5]="HP";
			if(hero->getStages(stat-1)>=6){
				cout<<"Cannot increase "<<statNames[stat-1]<<" any more" endl;
				return;
			}
			double buff=stage*3/2;
			hero->setStat(stat-1)=hero->getStat(stat-1)*stage;
			hero->setStages(stat-1)=hero->getStages(stat-1)+stage;
			cout<<hero->getName() <<"'s " <<statNames[stat-1]<<" increased by "<<buff<<"!"endl;
