#ifndef INTIMIDATE_HPP
#define INTIMIDATE_HPP

using namespace std;
class Intimidate: public Attack{
        public:
                Intimidate(){
                        setBaseDamage(0);
                        setWeaponType(0);
                        setDependency(0);
                        setDefensive(0);
                }
                virtual void attackBehavior(){
                       
                        statChange(1,-1);
			statChange(3,-1);
                }
};
#endif

