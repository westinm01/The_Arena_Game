#ifndef SHADOW_HPP
#define SHADOW_HPP

#include "character.hpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Shadow: public Character{
        public:
                Shadow(){
                        setName("Shadow");
                        setBaseStats(16,8,7,8,6,14);
                        setWeaponStats('B','A','S','D','C','D','S','C');
                        setFightStyle("Ninja");
                        setStatusAilment(0);
			//setImageFilePath((const char*)"../characterImages/shadowImage.hpp");
                }
		virtual void display(){
                        ifstream fin;
                        fin.open("characterImages/shadowImage.txt");
                        string line;
                        while(fin.good()){
                                getline(fin,line);
                                cout<<line<<endl;
                        }
                        fin.close();
                }

};

#endif
