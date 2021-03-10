#ifndef CURSE_HPP
#define CURSE_HPP

#include "attack.hpp"
using namespace std;
class Curse:public Attack{
        public:
                Curse(){
                        setBaseDamage(10);
                        setWeaponType(6);
                        setDependency(3);
                        setDefensive(4);
                }
                virtual void attackBehavior(){
                        inflictStatusAilment(6,100);
                }
};


#endif


