#ifndef BRACE_HPP
#define BRACE_HPP

#include "attack.hpp"
using namespace std;
class SideJab:public Attack{
        public:
                SideJab(){
                        setBaseDamage(75);
                        setWeaponType(4);
                        setDependency(3);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
                        int damage=dealDamage();
			if(getTarget()->getStatus()==5){
				damage=damage*1.2;
			}
                }
};


#endif


