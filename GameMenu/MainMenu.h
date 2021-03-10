#pragma once
#include <iostream> 
using namespace std; 

class MainMenu {
public:
    class MenuController* mc;
    MainMenu(MenuController* _mc);
    void printMenu();
    void retrieveInput();
};
