#ifndef VLAD_HPP
#define VLAD_HPP
#include "character.hpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Vlad : public Character{
	public:
		Vlad():Character(){
			setName("Vlad");
			setBaseStats(10,13,7,14,6,9);
			setWeaponStats('S','C','A','D','D','D','D','S');
			setFightStyle("Guardian");
			setStatusAilment(0);
			//setImageFilePath((const char*)"../characterImages/vladImage.txt");
		}
		virtual void display(){
                        ifstream fin;
                        fin.open("characterImages/vladImage.txt");
                        string line;
                        while(fin.good()){
                                getline(fin,line);
                                cout<<line<<endl;
                        }
                        fin.close();
                }

			

};

#endif 
