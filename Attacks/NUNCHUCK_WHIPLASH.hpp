#ifndef NUNCHUCK_WHIPLASH_HPP
#define NUNCHUCK_WHIPLASH_HPP

using namespace std;
class NunchuckWhiplash: public Attack{
        public:
                NunchuckWhiplash(){
                        setBaseDamage(110);
                        setWeaponType(5);
                        setDependency(1);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
                        int damage=dealDamage();
                }
};
#endif

