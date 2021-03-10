#ifndef DREAM_DRAIN_HPP
#define DREAM_DRAIN_HPP

#include "attack.hpp"
using namespace std;
class DreamDrain:public Attack{
        public:
                DreamDrain(){
                        setBaseDamage(70);
                        setWeaponType(6);
                        setDependency(3);
                        setDefensive(4);
			setName("Dream Drain");
			setDescription("Only works on sleep targets. Damage the target and heal for 1/2 the damage dealt.");
                }
                virtual void attackBehavior(){
			int damage=0;
                        if(getTarget()->getStatus()==3){
				damage=dealDamage();
				//Heal(damage/2);
			}
                }
};


#endif


