#ifndef MOONLIGHT_MADNESS_HPP
#define MOONLIGHT_MADNESS_HPP

#include "attack.hpp"
using namespace std;
class MoonlightMadness:public Attack{
        public:
                MoonlightMadness(){
                        setBaseDamage(0);
                        setWeaponType(0);
                        setDependency(0);
                        setDefensive(0);
			setName("Moonlight Madness");
			setDescription("Boost own special attack by 2 stages.");
                }
                virtual void attackBehavior(){
                        statChange(3,2);
                }
};


#endif


