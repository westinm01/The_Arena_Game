#include "AbilityItem/ability.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){

	Ability* ability = new WitchWrath();
	
	cout << "--== CHARACTER ABILITY ==--" << endl;
	cout << "Name: " << ability->getName() << endl;
	cout << "Description: " << ability->getDescription() << endl;

	delete ability;

	return 0;

}
