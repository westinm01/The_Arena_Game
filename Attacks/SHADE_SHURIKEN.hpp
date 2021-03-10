#ifndef SHADE_SHURIKEN_HPP
#define SHADE_SHURIKEN_HPP

#include "attack.hpp"
using namespace std;
class ShadeShuriken:public Attack{
        public:
                ShadeShuriken(){
                        setBaseDamage(60);
                        setWeaponType(7);
                        setDependency(1);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
                        int damage=dealDamage();
                }
};


#endif


