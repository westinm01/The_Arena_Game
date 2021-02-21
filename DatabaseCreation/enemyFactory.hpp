#ifndef ENEMYFACTORY_HPP
#define ENEMYFACTORY_HPP
#include <string>
#include "character.hpp"
#include "vlad.hpp"
#include "kenny.hpp"
#include "ryder.hpp"
#include "loom.hpp"
#include "shadow.hpp"
using namespace std;
class EnemyFactory{
	public:
	Character* makeCharacter(string characterChosen){
		if(characterChosen=="1"){
			return new Vlad();
		}
		if(characterChosen=="2"){
			return new Kenny();
		}
		if(characterChosen=="3"){
			return new Ryder();
		}
		if(characterChosen=="4"){
			return new Loom();
		}
		if(characterChosen=="5"){
			return new Shadow();
		}
		return 0;
		}
};
#endif
