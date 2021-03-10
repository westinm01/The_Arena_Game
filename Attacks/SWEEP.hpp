#ifndef SWEEP_HPP
#define SWEEP_HPP

#include "attack.hpp"
using namespace std;
class Sweep:public Attack{
        public:
                Sweep(){
                        setBaseDamage(50);
                        setWeaponType(3);
                        setDependency(1);
                        setDefensive(2);
			setName("Sweep");
			setDescription("Lowers target's speed by 1 stage.");
                }
                virtual void attackBehavior(){
			int damage=dealDamage();
                        statChange(6,-1);
                }
};


#endif


