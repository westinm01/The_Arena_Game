#ifndef KENNY_HPP
#define KENNY_HPP
#include "character.hpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Kenny: public Character{
	public:
		Kenny(){
			setName("Kenny");
			setBaseStats(12,8,15,8,5,11);
                        setWeaponStats('D','B','D','S','C','B','D','A');
                        setFightStyle("Trickster");
                        setStatusAilment(0);
			//setImageFilePath((const char*)"../charactetImages/kennyImage.txt");
		}
		virtual void display(){
                	ifstream fin;
                	fin.open("characterImages/kennyImage.txt");
                	string line;
                	while(fin.good()){
                	        getline(fin,line);
                	        cout<<line<<endl;
                	}
                	fin.close();
        	}

};

#endif
