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
                }
                virtual void attackBehavior(){
                        inflictStatusAilment(3,50);
			if(getTarget()->getStatus!=3){
				changeStat(5,-1);
			}
                }
};


#endif


