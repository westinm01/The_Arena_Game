#ifndef ROUNDHOUSE_KICK_HPP
#define ROUNDHOUSE_KICK_HPP


class RoundhouseKick:public Attack{
	RoundhouseKick(){
		setBaseDamage(80);
		setWeaponType(0);
		setDependency(1);
	}
	virtual void attackBehavior(){
		int damage=dealDamage();
		inflictStatusAilment(2,30);
	}


#endif
