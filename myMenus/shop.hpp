#ifndef __SHOP_HPP__
#define __SHOP_HPP__

#include "../DatabaseCreation/database.hpp"

#include <iostream>
#include <string>
#include <vector>

class Shop{

	Database data;
	public:
		Shop() {}

		void printMenu(){
			data.fill_database();	
		
			do{
				cout << endl;	
				cout << "-= Shop =-" << endl;
				cout << "1. Buy" << endl;
				cout << "2. Sell" << endl;
				cout << "3. Exit" << endl;
				
				int choice;
				cout << endl;
				cout << "Select an option: ";
				cin >> choice;

				if(choice == 1)(
					data.display_database();
				}
				
				}while(choice != 3);
			

		}


};
#endif
