#ifndef STAR_STRIKE_HPP
#define STAR_STRIKE_HPP
#include "attack.hpp"
using namespace std;
class StarStrike:public Attack{
	public:
	StarStrike(){
		this->setBaseDamage(50);
		this->setWeaponType(7);
		this->setDependency(1);
		setName("Star Strike");
		setDescription("No additional effect.");
	}

	virtual void attackBehavior(){
		int damage=dealDamage();
	}

};
#endif
