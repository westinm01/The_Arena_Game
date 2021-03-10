#ifndef SHIELD_THROW_HPP
#define SHIELD_THROW_HPP
#include "attack.hpp"
using namespace std;
class ShieldThrow: public Attack{
        public:
                ShieldThrow(){
                        setBaseDamage(110);
                        setWeaponType(8);
                        setDependency(2);
                        setDefensive(2);
			setName("Shield Throw");
			setDescription("Confuses target. Can only be used once per turn.");
                }
                virtual void attackBehavior(){
                  	int damage=dealDamage();
                        inflictStatusAilment(1,100);
                }
};
#endif

