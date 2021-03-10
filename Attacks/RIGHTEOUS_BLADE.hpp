#ifndef RIGHTEOUS_BLADE_HPP
#define RIGHTEOUS_BLADE_HPP
#include "attack.hpp"
using namespace std;
class RighteousBlade: public Attack{
        public:
                RighteousBlade(){
                        setBaseDamage(90);
                        setWeaponType(1);
                        setDependency(1);
                        setDefensive(2);
			setName("Righteous Blade");
			setDescription("Has a 10\% chance to lower a random stat of the target.");
                }
                virtual void attackBehavior(){
			int damage=dealDamage();
			if(getUser()->getStat(5)%10==7){
                        	srand(time(NULL));
                        	int statChosen=rand()%6+1;
                        	statChange(statChosen,-1);
                	}
		}
};
#endif

