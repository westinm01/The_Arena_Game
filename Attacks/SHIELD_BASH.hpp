#ifndef SHIELD_BASH_HPP
#define SHIELD_BASH_HPP

#include "attack.hpp"
using namespace std;
class ShieldBash:public Attack{
        public:
                ShieldBash(){
                        setBaseDamage(60);
                        setWeaponType(8);
                        setDependency(2);
			setDefensive(2);
                }
                virtual void attackBehavior(){
                        int damage=dealDamage();
                }


#endif

