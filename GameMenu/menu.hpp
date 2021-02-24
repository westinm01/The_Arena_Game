#ifndef __MENU_HPP__
#define __MENU_HPP__
#include <iostream>
#include <string>
#include <vector> 
using namespace std;

class Menu{
    Menu(){};
    //virtual ~Menu(){};
    virtual void printMenu() = 0;
    virtual void retrieveInput() = 0;
};

class MainMenu : public Menu{
public:
    vector <Menu*> menuChoices;
    MainMenu{
	menuChoices.push_back(Menu* inventory);
	menuChoices.push_back(Menu* character);
	menuChoices.push_back(Menu* shop);
	menuChoices.push_back(Menu* settings);
}
    virtual void printMenu(){
	cout << "-= Main Menu =-" << endl;
	cout << "1. Inventory" << endl;
	cout << "2. Character" << endl;
	cout << "3. Shop" << endl;
	cout << "4. Settings" << endl;
	cout << "5. Quit Game" << endl;	    
    }
     
/*    virtual void retrieveInput(string choice){
	if (choice == "1"){
	    //inventory();   
	}
	if (choice == "2") {
	    //character();
	}
	if (choice == "3") {
	    shop();
	}
	if (choice == "4") {
	    settings();
	}
	if (choice == "5") {
	    //quitGame();
	}
    }	
};

class Settings : public Menu{
public:   
    Settings() {}
 
   virtual void printMenu(){
	cout << "-= Settings =-" << endl;
	cout << "1. Difficulty" << endl;
	cout << "2. Back" << endl;
    }   
    virtual void retrieveInput(string choice){
	if (choice == "1"){
	    //hardness();
	}
	if (choice == "2"){
	    //back();
	}
    }
};  

class Shop : public Menu{
public:    
    Shop() {}

    virtual void printMenu(){
	cout << "-= Shop =-" << endl;
	cout << "1. Browse" << endl;
	cout << "2. Back" << endl;
    }

    virtual void retrieveInput(string choice){
	if (choice == "1"){
     //       browse();
	}
	if (choice == "2"){
//	    back();
	}
    }
}; 
*/
#endif