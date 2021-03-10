#ifndef DUSK_DASH_HPP
#define DUSK_DASH_HPP

#include "attack.hpp"
using namespace std;
class DUSK_DASH:public Attack{
        public:
                Brace(){
                        setBaseDamage(75);
                        setWeaponType(2);
                        setDependency(1);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
                     	int damage=dealDamage();
                }
};


#endif


