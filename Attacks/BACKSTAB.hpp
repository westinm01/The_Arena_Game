#ifndef BACKSTAB_HPP
#define BACKSTAB_HPP


class Backstab:public Attack{
	public:
        	RoundhouseKick(){
                	setBaseDamage(120);
               		setWeaponType(0);
              		setDependency(1);
        	}
        	virtual void attackBehavior(){
                	int damage=dealDamage();
        	}


#endif

