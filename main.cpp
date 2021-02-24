#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>
#include "PlayableCharacterCreation/characterFactory.hpp"
#include "PlayableCharacterCreation/character.hpp"
using namespace std;
Character* characterSelection();
void DisplayIntro(const char* filepath);
void sleep(int sec);
int main(){
	Character* mainCharacter=characterSelection();
	delete mainCharacter;
	return 0;
}


Character* characterSelection(){
	ifstream fin;
	cout<<"Choose your character:"<<endl<<endl;
	sleep(2);
        cout<<"(1)Gladwell -- the honorable knight"<<endl;
        DisplayIntro((const char*)"characterImages/gladwellImage.txt");
	sleep(5);
	cout<<"(2)Kaani -- the crime-fighting ninja"<<endl;
	DisplayIntro((const char*)"characterImages/kaaniImage.txt");
        sleep(5);
	cout<<"(3)Revvin -- the street thief"<<endl;
	DisplayIntro((const char*)"characterImages/revvinImage.txt");
        sleep(5);
	cout<<"(4)Tuckson -- the youthful trickster"<<endl;
	DisplayIntro((const char*)"characterImages/tucksonImage.txt");
	sleep(5);
        cout<<"(5)Winelle -- the wise mage"<<endl;
	DisplayIntro((const char*)"characterImages/winelleImage.txt");
	sleep(5);

        cout<<"Enter the number of the character you want:"<<endl;
        string choice;
        CharacterFactory *factory=new CharacterFactory();
        Character* mainCharacter=0;
        cin>>choice;
        mainCharacter=factory->makeCharacter(choice);
	
        if(mainCharacter==0){
                return 0;
        }
        cout<<"You have chosen "<<mainCharacter->getName()<<"!"<<endl;
        cout<<"Base Stats: "<<endl;
        cout<<"\tAttack:" <<mainCharacter->getAttack()<<endl;
        cout<<"\tDefense: "<<mainCharacter->getDefense()<<endl;
        cout<<"\tIntelligence: "<<mainCharacter->getSpecialAttack()<<endl;
        cout<<"\tSpecial Defense: "<<mainCharacter->getSpecialDefense()<<endl;
        cout<<"\tSpeed: "<<mainCharacter->getSpeed()<<endl;
        cout<<"\tHealth "<<mainCharacter->getHP()<<endl;
        delete factory;
	return mainCharacter;
}

void DisplayIntro(const char* filePath){
	ifstream fin;
	fin.open(filePath);
        string line;
        while(!fin.eof()){
        	getline(fin,line);
                cout<<line<<endl;
         }
         fin.close();

}

void sleep(int sec){
	std::this_thread::sleep_for(std::chrono::seconds{sec});
}
