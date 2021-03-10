#ifndef BELLY_ROLL_HPP
#define BELLY_ROLL_HPP

#include "attack.hpp"
using namespace std;
class BellyRoll:public Attack{
        public:
                BellyRoll(){
			//if(getUser()->getStage(4)>0){
                        //	setBaseDamage(70+20*(getUser()->getStage(4)));
			//}
			//else{
				setBaseDamage(70);
			//}
                        setWeaponType(3);
                        setDependency(3);
                        setDefensive(2);
			setName("Belly Roll");
			setDescription("Adds +20 base damage for each increased stage on speed.");
                }
                virtual void attackBehavior(){
                        int damage=dealDamage();
                }
};
#endif

