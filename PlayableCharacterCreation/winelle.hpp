#ifndef WINELLE_HPP
#define WINELLE_HPP
#include <fstream>
#include "character.hpp"
#include <string>
#include <iostream>
using namespace std;
class Winelle: public Character{
        public:
                Winelle(){
                        setName("Winelle");
                        setBaseStats(4,8,16,14,7,10);
                        setWeaponStats('D','D','C','D','D','S','D','B');
                        setFightStyle("Mage");
                        setStatusAilment(0);
			//setImageFilePath((const char*)"../characterImages/winelleimage.txt");
                }
		/*void display(){
			ifstream fin;
			fin.open("winelleImage.txt",ios::in);
			string line;
			while(!fin.eof()){
				getline(fin,line);
				cout<<line<<endl;
			}
			fin.close();
		}*/
		virtual void display(){
                        ifstream fin;
                        fin.open("characterImages/winelleImage.txt");
                        string line;
                        while(fin.good()){
                                getline(fin,line);
                                cout<<line<<endl;
                        }
                        fin.close();
                }

};

#endif

