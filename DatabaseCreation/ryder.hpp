#ifndef RYDER_HPP
#define RYDER_HPP

#include "character.hpp"
#include <string>
using namespace std;
class Ryder: public Character{
        public:
                Ryder(){
                        setName("Ryder");
                        setBaseStats(15,7,8,8,11,10);
                        setWeaponStats('B','A','C','A','S','D','C','C');
                        setFightStyle("Rebel");
                        setStatusAilment(0);

                }

};

#endif

