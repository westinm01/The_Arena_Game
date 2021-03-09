#ifndef SNACK_SNATCH_HPP
#define SNACK_SNATCH_HPP

using namespace std;
class SnackSnatch: public Attack{
        public:
                SnackSnatch(){
                        setBaseDamage(60);
                        setWeaponType(4);
                        setDependency(5);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
                       	int damage=dealDamage();
                     	//Knock off foe item.
                     	//heal 1/2 max health
                }
};
#endif

