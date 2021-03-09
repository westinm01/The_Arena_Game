#ifndef CHARACTERFACTORY_HPP
#define CHARACTERFACTORY_HPP
#include <string>
#include "character.hpp"
#include "gladwell.hpp"
#include "kaani.hpp"
#include "revvin.hpp"
#include "tuckson.hpp"
#include "winelle.hpp"
#include "shadow.hpp"
#include "loom.hpp"
#include "kenny.hpp"
#include "ryder.hpp"
#include "vlad.hpp"
using namespace std;
class CharacterFactory{
	public:
	Character* makeCharacter(string characterChosen){
		if(characterChosen=="1"){
			return new Gladwell();
		}
		if(characterChosen=="2"){
			return new Kaani();
		}
		if(characterChosen=="3"){
			return new Revvin();
		}
		if(characterChosen=="4"){
			return new Tuckson();
		}
		if(characterChosen=="5"){
			return new Winelle();
		}
		if(characterChosen=="6"){
			return new Shadow();
		}
		if(characterChosen=="7"){
			return new Loom();
		}
		if(characterChosen=="8"){
			return new Kenny();
		}
		if(characterChosen=="9"){
			return new Ryder();
		}
		if(characterChosen=="10"){
			return new Vlad();
		}
		return 0;
		}
};
#endif
