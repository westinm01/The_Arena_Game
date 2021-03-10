#ifndef DUSK_DASH_HPP
#define DUSK_DASH_HPP

#include "attack.hpp"
using namespace std;
class DuskDash:public Attack{
        public:
                DuskDash(){
                        setBaseDamage(75);
                        setWeaponType(2);
                        setDependency(1);
                        setDefensive(2);
			setName("Dusk Dash");
			setDescription("No additional effects.");
                }
                virtual void attackBehavior(){
                     	int damage=dealDamage();
                }
};


#endif


