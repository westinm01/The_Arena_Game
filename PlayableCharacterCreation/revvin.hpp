#ifndef REVVIN_HPP
#define REVVIN_HPP

#include "character.hpp"
#include <string>
using namespace std;
class Revvin: public Character{
        public:
                Revvin(){
                        setName("Revvin");
                        setBaseStats(15,7,8,8,11,10);
                        setWeaponStats('B','A','C','A','S','D','C','C');
                        setFightStyle("Rebel");
                        setStatusAilment(0);

                }

};

#endif

