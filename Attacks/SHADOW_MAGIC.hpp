#ifndef SHADOW_MAGIC_HPP
#define SHADOW_MAGIC_HPP

#include "attack.hpp"
using namespace std;
class ShadowMagic:public Attack{
        public:
                ShadowMagic(){
                        setBaseDamage(70);
                        setWeaponType(6);
                        setDependency(3);
                        setDefensive(4);
                }
                virtual void attackBehavior(){
                        int damage=dealDamage;
                }
};


#endif


