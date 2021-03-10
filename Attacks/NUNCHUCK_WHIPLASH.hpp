#ifndef NUNCHUCK_WHIPLASH_HPP
#define NUNCHUCK_WHIPLASH_HPP
#include "attack.hpp"
using namespace std;
class NunchuckWhiplash: public Attack{
        public:
                NunchuckWhiplash(){
                        setBaseDamage(110);
                        setWeaponType(5);
                        setDependency(1);
                        setDefensive(2);
			setName("Nunchuck Whiplash");
			setDescription("No additional effects.");
                }
                virtual void attackBehavior(){
                        int damage=dealDamage();
                }
};
#endif

