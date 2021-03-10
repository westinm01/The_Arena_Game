#ifndef __SHOP_HPP__
#define __SHOP_HPP__

#include "../DatabaseCreation/database.hpp"
#include "../PlayableCharacterCreation/character.hpp"
//#include "../GameMenu/MenuController.h"
#include <iostream>
#include <string>
#include <vector>

class Shop{

	Database data;
	public:
		class MenuController* mc;
	
		Shop() {}
		Shop(MenuController* _mc){
			mc = _mc;
		}
		

		void printMenu(){
			cout << endl;	
			cout << "-= Shop =-" << endl;
			cout << "1. Buy" << endl;
			cout << "2. Sell" << endl;
			cout << "[Type 0 to go back]" << endl;
			cout << endl;
		}

		void retrieveInput(Character* c){
			int choice;
		do{	
			printMenu();
			
			cout << "Select an option: ";
			cin >> choice;
			cout << endl;

			if (choice == 0){
				mc->mainMenu->printMenu();
				mc->mainMenu->retrieveInput(c);
			}

			if(choice == 1){
				int choice2;
			
					/*cout << "Note: Certain items will become purchaseable after ranking up." << endl;
					cout << "Your current rank is " << c->getRank() << "." << endl;
					*/
					cout << "You have " << c->getMoney() << " gold." << endl;
					cout << endl;
					data.fill_database();

					cout << "-= FOR SALE =-" << endl;
					data.display_database();
			
				do{		
					cout << endl;
					cout << "Select an item to buy (0 to exit): ";
					cin >> choice2;
					cout << endl;

					if(choice2 == 0){
						data.clear();
						break;
					}

					if(choice2 > 32){
						cout << "Invalid selection. Try again." << endl;
					}

					if(choice2 <= 32){
						cout << endl;
						cout << "Name: " << data.pullItem(choice2)->getName() << endl;	
						cout << "Description:\n" << data.pullItem(choice2)->getDesc() << endl;
						cout << endl;

						std::string choice5;
						cout << "Do you want to purchase this for " << data.pullItem(choice2)->getPrice() << " gold?(Y/N): ";				
						cin >> choice5;
						cout << endl;
						if(choice5 == "Y" || choice5 == "y"){
							if(c->getMoney() < data.pullItem(choice2)->getPrice()){
								cout << "Not enough gold." << endl;
								cout << endl;
							} else if (c->getItems().size() == 3){
								cout << "You don't have space for this item (3 max).";
								cout << endl;
							} else {
								int newMoney = c->getMoney() - data.pullItem(choice2)->getPrice();
								c->setMoney(newMoney);
								c->addItem(data.pullItem(choice2));
								cout << "Successfully purchased!" << endl;
							}
							
							
			
						}


					}
			}while (choice2 != 0);

			}

			if(choice == 2){
				int choice3;

				cout << "-= INVENTORY =-" << endl;
				do{
					c->showItems();
					cout << "Select an item to sell (0 to exit): ";
					cin >> choice3;
					cout << endl;

					if(choice3 == 0){
						break;
					}

					if(choice3 > 3){
						cout << "Invalid selection. Try again." << endl;
						cout << endl;
					}


					if(choice3 <= 3 && choice3 > 0){
						if(c->getItems().size() != 0){
							if(c->isHolding() == true && c->getItem(choice3)->getName() == c->getHand()->getName()){
								cout << "You cannot sell an item you are holding. Try again." << endl;
							}else if(c->getItem(choice3)->getName() != c->getHand()->getName()){
								std::string choice4;
								cout << "You have selected " << c->getItem(choice3)->getName() << ". Do you want to sell it?(Y/N):  ";
								cin >> choice4;
								cout << endl;
								if(choice4 == "Y" || choice4 == "y"){
									int newMoney = c->getMoney() + c->getItem(choice3)->getPrice();
									c->setMoney(newMoney);
									cout << "Sold for " << c->getItem(choice3)->getPrice() << "!" << endl;
									c->deleteItem(choice3);
									cout << "You now have " << c->getMoney() << " gold." << endl;
									cout << endl;
								}
							}
 						}
					}

				}while(choice3 != 0);		
					
			}
		
			} while(choice != 0);
		}
		


};
#endif
