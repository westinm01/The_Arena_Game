#ifndef SHADOW_HPP
#define SHADOW_HPP

#include "character.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include "../Attacks/SWEEP.hpp"
#include "../Attacks/STAR_STRIKE.hpp"
#include "../Attacks/DUSK_DASH.hpp"
#include "../Attacks/SHADE_SHURIKEN.hpp"
using namespace std;
class Shadow: public Character{
        public:
                Shadow(){
                        setName("Shadow");
                        setBaseStats(16,8,7,8,6,14);
                        setWeaponStats('B','A','S','D','C','D','S','C');
                        setFightStyle("Ninja");
                        setStatusAilment(0);
			Attack * one = new Sweep();
			setAttack(one);
			Attack* two = new StarStrike();
			setAttack(two);
			Attack * three = new DuskDash();
			setAttack(three);
			Attack * four = new ShadeShuriken();
			setAttack(four);
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
