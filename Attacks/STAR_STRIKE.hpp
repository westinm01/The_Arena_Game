#ifndef STAR_STRIKE_HPP
#define STAR_STRIKE_HPP

using namespace std;
class StarStrike:public Attack{
	StarStrike(){
		this->setBaseDamage(50);
		this->setWeaponType(7);
		this->setDependency(1);
	}

	virtual void attackBehavior(){
		int damage=dealDamage();
	}

};
#endif
