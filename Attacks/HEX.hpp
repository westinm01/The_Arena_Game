#ifndef HEX_HPP
#define HEX_HPP

#include "attack.hpp"
using namespace std;
class Hex:public Attack{
        public:
                Hex(){
                        setBaseDamage(50);
                        setWeaponType(6);
                        setDependency(3);
                        setDefensive(4);
			setName("Hex");
			setDescription("30\% chance to lower target's special defense.");
                }
                virtual void attackBehavior(){
                        int damage=dealDamage();
			srand(time(NULL));
			int chosen=rand()*100;
			if(chosen<30){
                        	statChange(4,-1);
			}
		}
};
#endif
