fndef ENEMYFACTORY_HPP
#define ENEMYFACTORY_HPP
#include <string>
#include "character.hpp"
#include "database.hpp"
#include "vlad.hpp"
#include "kenny.hpp"
#include "ryder.hpp"
#include "loom.hpp"
#include "shadow.hpp"
using namespace std;
class EnemyFactory{
	public:
	Character* makeCharacter(string choice, Database* data){
		if(choice == "1"){
			return data->getEnemy(characterChosen);
		}
		if(choice == "2"){
			return data->getEnemy(choice);
		}
		if(choice == "3"){
			return data->getEnemy(choice);
		}
		if(choice == "4"){
			return data->getEnemy(choice);
		}
		if(choice == "5"){
			return data->getEnemy(Shadow());
		}
		return 0;
		}
};
#endif
