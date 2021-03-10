#ifndef VANDALIZE_HPP
#define VANDALIZE_HPP
#include "attack.hpp"
using namespace std;
class Vandalize: public Attack{
        public:
                Vandalize(){
                        setBaseDamage(70);
                        setWeaponType(5);
                        setDependency(1);
                        setDefensive(2);
			setName("Vandalize");
			setDescription("Lower target's defense by 1 stage.");
                }
                virtual void attackBehavior(){
                      	int damage=dealDamage();
                        statChange(2,-1);
                }
};
#endif

