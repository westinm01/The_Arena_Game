#ifndef LOOM_HPP
#define LOOM_HPP
#include <fstream>
#include "character.hpp"
#include <string>
#include <iostream>
using namespace std;
class Loom: public Character{
        public:
                Loom(){
                        setName("Loom");
                        setBaseStats(4,5,21,10,13,6);
                        setWeaponStats('D','C','D','C','D','S','D','C');
                        setFightStyle("Mage");
                        setStatusAilment(0);
			//setImageFilePath((const char*)"../characterImages/loomImage.txt");
                }
		virtual void display(){
                        ifstream fin;
                        fin.open("characterImages/loomImage.txt");
			string line;
			if(fin.eof()){
				cout<<"eof true"<<endl;
			}
			if(fin.bad()){
				cout<<"bad true"<<endl;
			}
			else if(fin.fail()){
				cout<<"fail true"<<endl;
			}
                        while(getline(fin,line)){
                                
                                cout<<line<<endl;
                        }
                        fin.close();
			
			/*ifstream fin;
		        fin.open("mock.txt");
        		string line;
        		while(!fin.eof()){
                		getline(fin,line);
                		cout<<line<<endl;
         		}
         		fin.close();*/

                }

};
#endif
