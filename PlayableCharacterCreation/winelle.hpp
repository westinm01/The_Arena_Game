#ifndef WINELLE_HPP
#define WINELLE_HPP

#include "character.hpp"
#include <string>
using namespace std;
class Winelle: public Character{
        public:
                Winelle(){
                        setName("Winelle");
                        setBaseStats(4,8,16,14,7,10);
                        setWeaponStats('D','D','C','D','D','S','D','B');
                        setFightStyle("Mage");
                        setStatusAilment(0);

                }

};

#endif

