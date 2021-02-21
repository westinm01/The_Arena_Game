#ifndef VLAD_HPP
#define VLAD_HPP
#include "character.hpp"
#include <string>

using namespace std;

class Vlad : public Character{
	public:
		Vlad():Character(){
			setName("Vlad");
			setBaseStats(3,20,7,11,2,17);
			setWeaponStats(('A','D','B','C','D','B','D','S');
			setFightStyle("Guardian");
			setStatusAilment(0);
		}
			

};
