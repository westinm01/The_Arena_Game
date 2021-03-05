#ifndef GLADWELL_HPP
#define GLADWELL_HPP
#include "character.hpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Gladwell: public Character{
	public:
		Gladwell():Character(){
			setName("Gladwell");
			setBaseStats(3,20,7,11,2,17);
			setWeaponStats('A','D','B','C','D','B','D','S');
			setFightStyle("Guardian");
			setStatusAilment(0);
			//setImageFilePath((const char*)"../characterImages/gladwellImage.txt");
		}
		virtual void display(){
                	ifstream fin;
                	fin.open("characterImages/gladwellImage.txt");
                	string line;
                	while(fin.good()){
                	        getline(fin,line);
                	        cout<<line<<endl;
                	}
                	fin.close();
	        }

		
};

#endif
