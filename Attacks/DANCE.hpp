#ifndef DANCE_HPP
#define DANCE_HPP

using namespace std;
class Dance: public Attack{
	public:
		Dance(){
			setBaseDamage(0);
			setWeaponType(0);
			setDependency(0);
			setDefensive(0);
		}
		virtual void attackBehavior(){
			srand(time(NULL));
			int statChosen=rand()%6+1;
			statChange(statChosen,2);
		}
};
#endif
