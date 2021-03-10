#ifndef SHIELD_THROW_HPP
#define SHIELD_THROW_HPP

using namespace std;
class ShieldThrow: public Attack{
        public:
                ShieldThrow(){
                        setBaseDamage(110);
                        setWeaponType(8);
                        setDependency(2);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
                  	int damage=dealDamage();
                        inflictStatusAilment(1,100);
                }
};
#endif

