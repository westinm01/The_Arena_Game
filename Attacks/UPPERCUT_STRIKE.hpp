#ifndef UPPERCUT_STRIKE_HPP
#define UPPERCUT_STRIKE_HPP

using namespace std;
class UppercutStrike: public Attack{
        public:
                UppercutStrike(){
                        setBaseDamage(150);
                        setWeaponType(4);
                        setDependency(1);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
                        int damage=0;
			if(!getTarget()->getItems().empty()){
				damage=dealDamage();
			}
                }
};
#endif

