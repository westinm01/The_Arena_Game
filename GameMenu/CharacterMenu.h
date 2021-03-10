#ifndef __CHARACTERMENU_H__
#define __CHARACTERMENU_H__
#include <iostream>
#include <string>
using namespace std;

class Character;
class CharacterMenu{
public:
    class MenuController* mc;
    CharacterMenu(MenuController* _mc);
    void printMenu();
    void retrieveInput(Character* c);
};

#endif
