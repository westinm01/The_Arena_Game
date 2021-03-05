#ifndef RYDER_HPP
#define RYDER_HPP
#include <iostream>
#include <fstream>
#include "character.hpp"
#include <string>
using namespace std;
class Ryder: public Character{
        public:
                Ryder(){
                        setName("Ryder");
                        setBaseStats(15,10,7,8,11,8);
                        setWeaponStats('B','S','C','S','A','D','D','D');
                        setFightStyle("Rebel");
                        setStatusAilment(0);
			//setImageFilePath((const char*)"../characterImages/ryderImage.txt");
                }
		virtual void display(){
                        ifstream fin;
                        fin.open("characterImages/ryderImage.txt");
                        string line;
                        while(fin.good()){
                                getline(fin,line);
                                cout<<line<<endl;
                        }
                        fin.close();
                }

};

#endif

