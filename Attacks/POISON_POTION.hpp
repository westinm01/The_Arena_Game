#ifndef POISON_POTION_HPP
#define POISON_POITION_HPP

#include "attack.hpp"
using namespace std;
class PoisonPotion:public Attack{
        public:
                PoisonPotion(){
                        setBaseDamage(30);
                        setWeaponType(0);
                        setDependency(3);
                        setDefensive(4);
                }
                virtual void attackBehavior(){
                        inflictStatusAilment(5,100);
                }
};


#endif


