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
			setName("Snack Snatch");
			setDescription("Unequip one item off of the target. This attack's damage depends on the user's speed.");
                }
                virtual void attackBehavior(){
                       	int damage=dealDamage();
                     	//Knock off foe item.
                     	//heal 1/2 max health
                }
};
#endif

