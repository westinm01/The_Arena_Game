#ifndef VANDALIZE_HPP
#define VANDALIZE_HPP

using namespace std;
class Vandalize: public Attack{
        public:
                Vandalize(){
                        setBaseDamage(70);
                        setWeaponType(5);
                        setDependency(1);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
                      	int damage=dealDamage();
                        statChange(2,-1);
                }
};
#endif

