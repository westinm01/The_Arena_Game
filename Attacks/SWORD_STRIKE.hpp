#ifndef SWORD_STRIKE_HPP
#define SWORD_STRIKE_HPP

using namespace std;
class SwordStrike: public Attack{
        public:
                SwordStrike(){
                        setBaseDamage(65);
                        setWeaponType(1);
                        setDependency(1);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
                        int damage=dealDamage();
                }
};
#endif

