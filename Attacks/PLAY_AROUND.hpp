#ifndef PLAY_AROUND_HPP
#define PLAY_AROUND_HPP

using namespace std;
class PlayAround: public Attack{
        public:
                PlayAround(){
                        setBaseDamage(100);
                        setWeaponType(4);
                        setDependency(3);
                        setDefensive(4);
                }
                virtual void attackBehavior(){
                        int damage= dealDamage();
			inflictStatusAilment(1,20);
                }
};
#endif

