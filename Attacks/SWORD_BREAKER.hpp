#ifndef SWORD_BREAKER_HPP
#define SWORD_BREAKER_HPP

#include "attack.hpp"
using namespace std;
class Brace:public Attack{
        public:
                Brace(){
                        setBaseDamage(300);
                        setWeaponType(1);
                        setDependency(1);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
                        int damage=dealDamage();
			inflictStatusAilment(2,50);
                }
};


#endif


