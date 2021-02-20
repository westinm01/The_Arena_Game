#include <iostream>
#include <string>
#include "PlayableCharacterCreation/characterFactory.hpp"
#include "PlayableCharacterCreation/character.hpp"
using namespace std;
int main(){
	cout<<"Choose your character:"<<endl;
	cout<<"(1)Gladwell -- the honorable knight"<<endl;
	cout<<"(2)Kaani -- the crime-fighting ninja"<<endl;
	cout<<"(3)Revvin -- the street thief"<<endl;
	cout<<"(4)Tuckson -- the youthful trickster"<<endl;
	cout<<"(5)Winelle -- the wise mage"<<endl;
	cout<<"Enter the number of the character you want:"<<endl;
	string choice;
	CharacterFactory *factory=new CharacterFactory();
	Character* mainCharacter=0;
	cin>>choice;
	mainCharacter=factory->makeCharacter(choice);
	
	//if(mainCharacter=0){
	//	return 0;
	//}
	
	cout<<"You have chosen "<<mainCharacter->getName()<<"!"<<endl;
	cout<<"Base Stats: "<<endl;
	cout<<"\tAttack:" <<mainCharacter->getAttack()<<endl;
	cout<<"\tDefense: "<<mainCharacter->getDefense()<<endl;
	cout<<"\tIntelligence: "<<mainCharacter->getSpecialAttack()<<endl;
	cout<<"\tSpecial Defense: "<<mainCharacter->getSpecialDefense()<<endl;
	cout<<"\tSpeed: "<<mainCharacter->getSpeed()<<endl;
	cout<<"\tHealth "<<mainCharacter->getHP()<<endl;
	return 0;
}
