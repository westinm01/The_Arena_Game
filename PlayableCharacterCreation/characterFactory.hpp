#ifndef CHARACTERFACTORY_HPP
#define CHARACTERFACTORY_HPP
#include <string>
#include "character.hpp"
#include "gladwell.hpp"
#include "kaani.hpp"
#include "revvin.hpp"
#include "tuckson.hpp"
#include "winelle.hpp"
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
		return 0;
		}
};
#endif
