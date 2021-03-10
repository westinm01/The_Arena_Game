#ifndef LAUGH_ATTACK_HPP
#define LAUGH_ATTACK_HPP

#include "attack.hpp"
using namespace std;
class LaughAttack:public Attack{
        public:
                LaughAttack(){
                        setBaseDamage(0);
                        setWeaponType(0);
                        setDependency(0);
                        setDefensive(0);
                }
                virtual void attackBehavior(){
                	statChange(4,-1);
		}
};
#endif
