#ifndef KENNY_HPP
#define KENNY_HPP
#include "character.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include "../Attacks/LAUGH_ATTACK.hpp"
#include "../Attacks/BELLY_ROLL.hpp"
#include "../Attacks/DANCE.hpp"
#include "../Attacks/PLAY_AROUND.hpp"
using namespace std;
class Kenny: public Character{
	public:
		Kenny(){
			setName("Kenny");
			setBaseStats(12,8,15,8,5,11);
                        setWeaponStats('D','B','D','S','C','B','D','A');
                        setFightStyle("Trickster");
                        setStatusAilment(0);
			Attack* one = new LaughAttack();
			setAttack(one);
			Attack * two = new BellyRoll();
			setAttack(two);
			Attack * three = new Dance();
			setAttack(three);
			Attack * four= new PlayAround();
			setAttack(four);
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
