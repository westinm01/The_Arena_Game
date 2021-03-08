#ifndef STATUS_AFFLICTA_HPP
#define STATUS_AFFLICTA_HPP

#include "attack.hpp"
using namespace std;
class StatusAfflicta:public Attack{
        public:
                StatusAfflicta(){
                        setBaseDamage(0);
                        setWeaponType(0);
                        setDependency(0);
                        setDefensive(0);
                }
                virtual void attackBehavior(){
                        cout<<"Choose an affliction:"<<endl;
			cout<<"1. Confusion"<<endl;
			cout<<"2. Paralysis"<<endl;
			cout<<"3. Sleep"<<endl;
			int affliction;
			string call;
			cin>>call;
			affliciton=stoi(call);
			inflictStatusAilment(affliction,100);
                }
};


#endif


