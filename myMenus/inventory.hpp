#ifndef __INVENTORY_HPP__
#define __INVENTORY_HPP__

#include "../PlayableCharacterCreation/character.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Inventory{

public:   
	Inventory() {}
 
	void printMenu(Character* c){
		cout << "-= Inventory =-" << endl;
		c->showItems(); 
		cout << endl;
		cout << "[Type 0 to go back]" << endl << endl;
	}   

	virtual void menuFunc(Character* c){
			int choice;			
		do{
			printMenu(c);
			cout << "Select an item or exit inventory: ";
			cin >> choice;
		
			if(choice == 0){
				break;
			}

			if(choice > 3){
				cout << "Invalid selection. Try again." << endl;
			} 

			if(choice <= 3 && choice > 0){
				if(c->isHolding() == true && c->getHand()->getName() == c->getItem(choice)->getName()){
					std::string choice2;
					cout << c->getHand()->getName() << " is equipped. Do you want to unequip?(Y/N): ";
					cin >> choice2; 

					if(choice2 == "Y" || choice2 == "y"){
						c->unequipItem(choice);
					} else {

					} 
				} else if (c->isHolding() == false){
					std::string choice3;
					cout << "You have selected " << c->getItem(choice)->getName() << ". EQUIP or DELETE?(E/D): ";
					cin >> choice3;
					cout << endl;
					if(choice3 == "D" || choice3 == "d"){
						c->deleteItem(choice);
						cout << "Reloading items..." << endl;
						cout << endl;
					} else if (choice3 == "E" || choice3 == "e"){
						c->equipItem(choice);
					} else {

					}

				}
			}	

		
		}while (choice != 0);
	}
};
#endif
