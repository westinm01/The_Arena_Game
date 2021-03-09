#ifndef BELLY_ROLL_HPP
#define BELLY_ROLL_HPP

#include "attack.hpp"
using namespace std;
class BellyRoll:public Attack{
        public:
                BellyRoll(){
			if(getUser()->getStacks()>0){
                        	setBaseDamage(20+20*(getUser()->getStacks()));
			}
			else{
				setBaseDamage(20);
			}
                        setWeaponType(3);
                        setDependency(3);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
                        int damage=dealDamage();
                }
};
#endif

