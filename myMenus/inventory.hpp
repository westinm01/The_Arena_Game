#ifndef __INVENTORY_HPP__
#define __INVENTORY_HPP__

#include "../PlayableCharacterCreation/character.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Inventory{

	int choice;
public:   
	Inventory() {}
 
	void printMenu(Character* c){
		cout << "-= Inventory =-" << endl;
		c->showItems(); 
		cout << endl;
		cout << "[Type 0 to exit]" << endl << endl;
	}   

	virtual void menuFunc(Character* c){
			
		do{
			printMenu(c);
			cout << "Select an item or exit inventory: ";
			cin >> choice;
			if(c->getHand() != NULL){
				if(c->getHand()->getName() == c->getItem(choice)->getName()){
					std::string choice2;
					cout << c->getHand()->getName() << " is equipped. Do you want to unequip?(Y/N): ";
					cin >> choice2;
					cout << endl;
					if(choice2 == "Y"){
						c->unequipItem(choice);
					}
				}	
			}
				else if (c->getHand() == NULL){
					std::string choice3;
					cout << "EQUIP or DELETE?(E/D): " << endl;
					cin >> choice3;
					cout << endl;
					if(choice3 == "E" && c->getHand() == NULL){
						c->equipItem(choice);
					} else if (choice3 == "E" && c->getHand() != NULL){
						cout << "You already have an item equipped. You must unequip before you select another." << endl;
					} else if (choice3 == "D"){
						c->deleteItem(choice);
					}
				}
		
		}while (choice != 0);
	}
};
#endif
