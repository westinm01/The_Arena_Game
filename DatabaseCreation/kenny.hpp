#ifndef KENNY_HPP
#define KENNY_HPP
#include "character.hpp"
#include <string>
using namespace std;
class Kenny: public Character{
	public:
		Kenny(){
			setName("Kenny");
			setBaseStats(9,6,15,8,13,8);
                        setWeaponStats('B','B','D','B','C','A','B','C');
                        setFightStyle("Trickster");
                        setStatusAilment(0);
		
		}

};

#endif
