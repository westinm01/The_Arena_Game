#ifndef GLADWELL_HPP
#define GLADWELL_HPP
#include "character.hpp"
#include <string>
using namespace std;
class Gladwell: public Character{
	public:
		Gladwell():Character(){
			setName("Gladwell");
			setBaseStats(3,20,7,11,2,17);
			setWeaponStats('A','D','B','C','D','B','D','S');
			setFightStyle("Guardian");
			setStatusAilment(0);
		
		}

};

#endif
