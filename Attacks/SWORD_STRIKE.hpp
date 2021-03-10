#ifndef SWORD_STRIKE_HPP
#define SWORD_STRIKE_HPP
#include "attack.hpp"
using namespace std;
class SwordStrike: public Attack{
        public:
                SwordStrike(){
                        setBaseDamage(65);
                        setWeaponType(1);
                        setDependency(1);
                        setDefensive(2);
			setName("Sword Strike");
			setDescription("Has a 20\% chance to flicnh opponent.");
                }
                virtual void attackBehavior(){
                        int damage=dealDamage();
                }
};
#endif

