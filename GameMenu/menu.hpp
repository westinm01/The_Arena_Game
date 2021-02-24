#ifndef __MAINMENU_HPP__
#define __MAINMENU_HPP__
#include <iostream>
#include <string>
#include <vector> 
using namespace std;

class Menu{
    Menu(){};
    virtual ~Menu(){};
    virtual void printMenu() = 0;
    virtual void retrieveInput() = 0;
};

class MainMenu : public Menu{
public:
    virtual void printMenu(){
	cout << "-= Main Menu =-" << endl;
	cout << "1. Inventory" << endl;
	cout << "2. Character" << endl;
	cout << "3. Shop" << endl;
	cout << "4. Settings" << endl;
	cout << "5. Quit" << endl;	    
    }
    vector <Menu*> menuChoices;

    virtual void retrieveInput(string choice){
	if (choice == "1"){
	    inventory();   
	}
	if (choice == "2") {
	    character();
	}
	if (choice == "3") {
	    shop();
	}
	if (choice == "4") {
	    settings();
	}
	if (choice == "5") {
	    quit();
	}
    }	

};
class Settings : public Menu{
    virtual void printMenu(){
	cout << "-= Settings =-" << endl;
	cout << "1. Harness" << endl;
    }   
    virtual void retrieveInput(string choice){
	if (choice == "1"){
	    hardness();
	}
    }
};  

class Shop : public Menu{
    virtual void printMenu(){
	cout << "-= Shop =-" << endl;
	cout << "1. Browse" << endl;
	cout << "2. Quit" << endl;
    }

    virtual void retrieveInput(string choice){
	if (choice == "1"){
            browse();
	}
	if (choice == "2"){
	    quit();
	}
    }
}; 

#endif

