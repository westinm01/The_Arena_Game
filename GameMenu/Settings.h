#pragma once
#include <iostream>
using namespace std;

class Settings {
public:
    class MenuController* mc;
    Settings(MenuController* _mc);
    void printMenu();
    void retrieveInput();
};
