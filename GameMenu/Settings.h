#ifndef __SETTINGS_H__
#define __SETTINGS_H__
#include <iostream>
using namespace std;

class Character;
class Settings {
public:
    class MenuController* mc;
    Settings(MenuController* _mc);
    void printMenu();
    void retrieveInput(Character* c);
};

#endif
