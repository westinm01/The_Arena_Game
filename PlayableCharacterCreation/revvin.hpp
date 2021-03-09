#ifndef REVVIN_HPP
#define REVVIN_HPP

#include "character.hpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Revvin: public Character{
        public:
                Revvin(){
                        setName("Revvin");
                        setBaseStats(15,7,8,8,11,10);
                        setWeaponStats('B','A','C','A','S','D','C','C');
                        setFightStyle("Rebel");
                        setStatusAilment(0);
			//setImageFilePath((const char*)"../characterImages/revvinImage.txt");

                }
		virtual void display(){
                        ifstream fin;
                        fin.open("characterImages/revvinImage.txt");
                        string line;
                        while(fin.good()){
                                getline(fin,line);
                                cout<<line<<endl;
                        }
                        fin.close();
                }

};

#endif

