#ifndef TUCKSON_HPP
#define TUCKSON_HPP

#include "character.hpp"
#include <string>
using namespace std;
class Tuckson: public Character{
        public:
                Tuckson(){
                        setName("Tuckson");
                        setBaseStats(9,6,15,8,13,8);
                        setWeaponStats('B','B','D','B','C','A','B','C');
                        setFightStyle("Trickster");
                        setStatusAilment(0);

                }

};

#endif

