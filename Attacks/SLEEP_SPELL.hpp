#ifndef SLEEP_SPELL_HPP
#define SLEEP_SPELL_HPP

#include "attack.hpp"
using namespace std;
class SleepSpell:public Attack{
        public:
                SleepSpell(){
                        setBaseDamage(0);
                        setWeaponType(0);
                        setDependency(0);
                        setDefensive(0);
			setName("Sleep Spell");
			setDescription("Has a 50\% chance to put an enemy to sleep, otherwise lower their speed.");
                }
                virtual void attackBehavior(){
                        inflictStatusAilment(3,50);
			if(getTarget()->getStatus()!=3){
				statChange(5,-1);
			}
                }
};


#endif


