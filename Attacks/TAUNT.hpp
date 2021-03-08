#ifndef TAUNT_HPP
#define TAUNT_HPP

#include "attack.hpp"
using namespace std;
class Taunt:public Attack{
        public:
                Taunt(){
                        setBaseDamage(0);
                        setWeaponType(0);
                        setDependency(0);
                        setDefensive(0);
                }
                virtual void attackBehavior(){
                        statChange(2,-1);
                        statChange(4,-1);
                }
};


#endif


