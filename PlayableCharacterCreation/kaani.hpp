#ifndef KAANI_HPP
#define KAANI_HPP

#include "character.hpp"
#include <string>

class Kaani: public Character{
        public:
                Kaani(){
                        setName("Kaani");
                        setBaseStats(12,6,10,8,15,8);
                        setWeaponStats('C','S','D','B','A','C','S','B');
                        setFightStyle("Ninja");
                        setStatusAilment(0);

                }

};

#endif

