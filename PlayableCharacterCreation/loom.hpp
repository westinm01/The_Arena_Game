#ifndef LOOM_HPP
#define LOOM_HPP
#include <fstream>
#include "character.hpp"
#include <string>
#include <iostream>
//#include "../Attacks/attack.hpp"
//#include "../Attacks/SLEEP_SPELL.hpp"
//#include "../Attacks/MOONLIGHT_MADNESS.hpp"
//#include "../Attacks/DREAM_DRAIN.hpp"
//#include "../Attacks/HEX.hpp"
using namespace std;
class Loom: public Character{
        public:
                Loom(){
                        setName("Loom");
                        setBaseStats(4,5,21,10,13,6);
                        setWeaponStats('D','C','D','C','D','S','D','C');
                        setFightStyle("Mage");
                        setStatusAilment(0);
			//Attack * one = new SleepSpell();
			//setAttack(one);
			//Attack* two = new MoonlightMadness();
			//setAttack(two);
			//Attack* three = new DreamDrain();
			//setAttack(three);
			//Attack * four = new Hex();
			//setAttack(four);
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
