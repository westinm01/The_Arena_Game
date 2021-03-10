#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>
#include "PlayableCharacterCreation/characterFactory.hpp"
#include "PlayableCharacterCreation/character.hpp"
#include "battle.hpp"
using namespace std;
class Attack;
Character* characterSelection();
void DisplayIntro(const char* filepath);
void sleep(int sec);
void choseBattle(Character*,int &);
void endGame(int);
int BuildBattle(Character*, Character*);
Character* selectFoe(Character*,int &);
int main(){
	Character* mainCharacter=characterSelection();
	//delete mainCharacter;
	int battleNum=1;
	choseBattle(mainCharacter,battleNum);
	if(battleNum==11 || battleNum==-1){
		delete mainCharacter;
		return 0;
	}
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
	mainCharacter->display();
        cout<<"You have chosen "<<mainCharacter->getName()<<"!"<<endl;
        cout<<"Base Stats: "<<endl;
        cout<<"\tAttack: " <<mainCharacter->getStat(0)<<endl;
        cout<<"\tDefense: "<<mainCharacter->getDefense()<<endl;
        cout<<"\tIntelligence: "<<mainCharacter->getSpecialAttack()<<endl;
        cout<<"\tSpecial Defense: "<<mainCharacter->getSpecialDefense()<<endl;
        cout<<"\tSpeed: "<<mainCharacter->getSpeed()<<endl;
        cout<<"\tHealth: "<<mainCharacter->getHP()<<endl;
	cout<<"Attacks:"<<endl;
	for(int i =0; i<4;i++){
		cout<<"\t"<<i+1<<") "<<mainCharacter->getAttack(i)->getName() <<"\tBase Damage: "<< mainCharacter->getAttack(i)->getBaseDamage() <<endl;
		cout<<"\t\t-"<<mainCharacter->getAttack(i)->getDescription()<<endl;
	}
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
void choseBattle(Character * mainCharacter, int & battleNum){
	Character *foe = selectFoe(mainCharacter,battleNum);
	endGame(battleNum);
	int co=BuildBattle(mainCharacter,foe);
	if(co==0){
		battleNum++;
		endGame(battleNum);
	}
	else{
		battleNum=-1;
	}
}
void endGame(int battleNum){
	if(battleNum==11){
		cout<<"Congratulations you beat the game!"<<endl;
	}
	else{
		return;
	}
}
int BuildBattle(Character*hero,Character*foe){
	Battle * bat = new Battle(hero,foe);
	bat->battleCommence();
	int w=bat->winner;
	delete bat;
	return w;
}
Character * selectFoe(Character* user,int &battleNum){
	//int r = mainCharacter->getRank();
	Character * foe;
	if(battleNum==1){
		foe=new Vlad();
		if(user->getName()==foe->getName()){
			battleNum=2;
			delete foe;
		}
	}
	if(battleNum==2){
		foe=new Kaani();
		if(user->getName()==foe->getName()){
			battleNum=3;
			delete foe;
		}
	}
	if(battleNum==3){
		foe=new Kenny();
		if(user->getName()==foe->getName()){
			battleNum=4;
			delete foe;
		}	
	}
	if(battleNum==4){
		foe=new Winelle();
		if(user->getName()==foe->getName()){
			battleNum=5;
			delete foe;
		}
	}
	if(battleNum==5){
		foe=new Ryder();
		if(user->getName()==foe->getName()){
			battleNum=6;
			delete foe;
		}
	}
	if(battleNum==6){
		foe=new Tuckson();
		if(user->getName()==foe->getName()){
			battleNum=7;
			delete foe;
		}
	}
	if(battleNum==7){
		foe=new Loom();
		if(user->getName()==foe->getName()){
			battleNum=8;
			delete foe;
		}
	}
	if(battleNum==8){
		foe=new Gladwell();
		if(user->getName()==foe->getName()){
			battleNum=9;
			delete foe;
		}
	}
	if(battleNum==9){
		foe=new Revvin();
		if(user->getName()==foe->getName()){
			battleNum=10;
			delete foe;
		}
	}
	if(battleNum==10){
		foe=new Shadow();
		if(user->getName()==foe->getName()){
			battleNum=11;
			delete foe;
			foe=0;
		}
	}
	return foe;
}
