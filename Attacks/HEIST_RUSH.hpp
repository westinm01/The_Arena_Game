#ifndef HEIST_RUSH_HPP
#define HEIST_RUSH_HPP

using namespace std;
class HeistRush: public Attack{
        public:
                HeistRush(){
                        setBaseDamage(0);
                        setWeaponType(0);
                        setDependency(0);
                        setDefensive(0);
                }
                virtual void attackBehavior(){
                        srand(time(NULL));
                        int statChosen=rand()%6+1;
			statChange(5,1);
                        statChange(statChosen,1);
                }
};
#endif

