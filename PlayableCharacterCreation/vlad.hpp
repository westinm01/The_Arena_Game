#ifndef VLAD_HPP
#define VLAD_HPP
#include "character.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include "../Attacks/SWORD_STRIKE.hpp"
#include "../Attacks/RIGHTEOUS_BLADE.hpp"
#include "../Attacks/INTIMIDATE.hpp"
#include "../Attacks/SHIELD_THROW.hpp"
using namespace std;

class Vlad : public Character{
	public:
		Vlad():Character(){
			setName("Vlad");
			setBaseStats(10,13,7,14,6,9);
			setWeaponStats('S','C','A','D','D','D','D','S');
			setFightStyle("Guardian");
			setStatusAilment(0);
			Attack * one = new SwordStrike();
			setAttack(one);
			Attack* two = new RighteousBlade();
			setAttack(two);
			Attack * three= new Intimidate();
			setAttack(three);
			Attack * four = new ShieldThrow();
			setAttack(four);
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
