#ifndef LOOM_HPP
#define LOOM_HPP
#include <fstream>
#include "character.hpp"
#include <string>
using namespace std;
class Loom: public Character{
        public:
                Loom(){
                        setName("Loom");
                        setBaseStats(4,8,16,14,7,10);
                        setWeaponStats('D','D','C','D','D','S','D','B');
                        setFightStyle("Mage");
                        setStatusAilment(0);

                }
};
#endif
