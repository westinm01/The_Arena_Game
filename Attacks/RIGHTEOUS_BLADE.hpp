#ifndef RIGHTEOUS_BLADE_HPP
#define RIGHTEOUS_BLADE_HPP

using namespace std;
class RighteousBlade: public Attack{
        public:
                RighteousBlade(){
                        setBaseDamage(90);
                        setWeaponType(1);
                        setDependency(1);
                        setDefensive(2);
                }
                virtual void attackBehavior(){
			int damage=dealDamage();
			if(getUser->getStat(5)%10=7){
                        	srand(time(NULL));
                        	int statChosen=rand()%6+1;
                        	statChange(statChosen,-1);
                	}
		}
};
#endif

