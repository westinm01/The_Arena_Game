#ifndef KAANI_HPP
#define KAANI_HPP

#include "character.hpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Kaani: public Character{
        public:
                Kaani(){
                        setName("Kaani");
                        setBaseStats(12,6,10,8,15,8);
                        setWeaponStats('C','S','D','B','A','C','S','B');
                        setFightStyle("Ninja");
                        setStatusAilment(0);
			//setImageFilePath((const char*)"../characterImages/kaaniImage.txt");
                }
		virtual void display(){
                        ifstream fin;
                        fin.open("characterImages/kaaniImage.txt",ios::in);
                        string line;
                        while(fin.good()){
                                getline(fin,line);
                                cout<<line<<endl;
                        }
                        fin.close();
                }

};

#endif

