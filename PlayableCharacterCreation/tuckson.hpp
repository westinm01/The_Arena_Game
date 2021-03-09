#ifndef TUCKSON_HPP
#define TUCKSON_HPP

#include "character.hpp"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
class Tuckson: public Character{
        public:
                Tuckson(){
                        setName("Tuckson");
                        setBaseStats(9,6,15,8,13,8);
                        setWeaponStats('B','B','D','B','C','A','B','C');
                        setFightStyle("Trickster");
                        setStatusAilment(0);
			//setImageFilePath((const char*)"../characterImages/tucksonImage.hpp");
                }
		virtual void display(){
                        ifstream fin;
                        fin.open("characterImages/tucksonImage.txt");
                        string line;
                        while(fin.good()){
                                getline(fin,line);
                                cout<<line<<endl;
                        }
                        fin.close();
                }

};

#endif

