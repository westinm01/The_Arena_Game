#ifndef DREAM_DRAIN_HPP
#define DREAM_DRAIN_HPP

#include "attack.hpp"
using namespace std;
class DreamDrain:public Attack{
        public:
                Brace(){
                        setBaseDamage(70);
                        setWeaponType(6);
                        setDependency(3);
                        setDefensive(4);
                }
                virtual void attackBehavior(){
			int damage=0;
                        if(getTarget()->getStatus()==3){
				damage=dealDamage();
				//Heal;
			}
                }
};


#endif


