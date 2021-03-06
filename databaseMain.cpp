#include <iostream>
#include "PlayableCharacterCreation/characterFactory.hpp"
#include "PlayableCharacterCreation/character.hpp"
#include "DatabaseCreation/database.hpp"
//#include "DatabaseCreation/enemyFactory.hpp"

using namespace std;

int main(){
	Database db;

/*	
	Vlad* vla = new Vlad();
	Kenny* ken = new Kenny();
	Ryder* ryd = new Ryder();
	Loom* loo = new Loom();
	Shadow* sha = new Shadow();

	db.add_enemy(vla); //1
	db.add_enemy(ken); //2
	db.add_enemy(ryd)); //3
	db.add_enemy(loo); //4
	db.add_enemy(sha); //5
*/
	
	/*db.add_enemy(new Vlad()); //1
	db.add_enemy(new Kenny()); //2
	db.add_enemy(new Ryder()); //3
	db.add_enemy(new Loom()); //4
	db.add_enemy(new Shadow()); //5
*/
/*
 	delete vla;
	delete ken;
	delete ryd;
	delete loo;
	delete sha;
*/

	string choice;

	std::cout << "Choose your opponent:" << std::endl;
	std::cout << "1. Vlad the Bane" << std::endl;
	std::cout << "2. Kenny the Foul" << std::endl;
	std::cout << "3. Ryder the Lawless" << std::endl;
	std::cout << "4. Loom the Arcane" << std::endl;
	std::cout << "5. Shadow the Silent" << std::endl;
	
	cin >> choice;

	CharacterFactory* factory = new CharacterFactory();
	Character* enemy;

	enemy = factory->makeCharacter(choice);

	delete factory;

	std::cout << "You have chosen " << enemy->getName() << "!" << std::endl;
	std::cout << "Base Stats: " << std::endl;
        std::cout << "Attack: " << enemy->getAttack()<< std::endl;
        std::cout << "Defense: " << enemy->getDefense()<< std::endl;
        std::cout << "Intelligence: " << enemy->getSpecialAttack()<< std::endl;
        std::cout << "Special Defense: " << enemy->getSpecialDefense()<< std::endl;
        std::cout << "Speed: " << enemy->getSpeed()<< std::endl;
        std::cout << "Health:" << enemy->getHP()<< std::endl;
	delete enemy;
	return 0;
	
}
