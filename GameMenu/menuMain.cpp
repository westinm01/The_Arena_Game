#include <iostream>
#include "MenuController.h"

using namespace std;

int main() {

    MenuController* mc = new MenuController();
    mc->mainMenu->printMenu();
    mc->mainMenu->retrieveInput();


    return 0;
}
