#ifndef __ITEM_HPP__
#define __ITEM_HPP__

//#include "../PlayableCharacterCreation/character.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

class Character;
class Item{
	protected:
		std::string name;
		int itemType;
		int price;
		std::string desc;
	public:
		vector<pair<int,int>> effect;
		
		Item(){}

		virtual ~Item(){}

		std::string getName(){return name;}
		int getPrice(){return price;}
		int getItemType(){return itemType;}
		std::string getDesc() {return desc;}
};

class SLance: public Item{
	public:
		SLance(): Item(){
			name = "Standard Lance";
			itemType = 3;
			price = 30;
			desc = "+5 attack\n+1 health";
			effect.push_back(pair<int,int>(0, 4));
			effect.push_back(pair<int,int>(5, 1));
		}
	
};

class SStaff: public Item{
	public:
		SStaff():Item(){
			name = "Standard Staff";
			itemType = 6;
			price = 40;
			desc = "+4 special attack";
			effect.push_back(pair<int,int>(3, 4));
		}	
};

class SNun: public Item{
	public:
		SNun():Item(){
			name = "Standard Nunchucks";
			itemType = 5;
			price = 30;
			desc = "+5 attack";
			effect.push_back(pair<int,int>(0, 5));
		}
};

class SShield: public Item{
	public:
		SShield():Item(){
			name = "Standard Shield";
			itemType = 8;
			price = 30;
			desc = "+3 defense\n+2 special defense";
			effect.push_back(pair<int,int>(1, 3));
			effect.push_back(pair<int,int>(3, 2));
		}
};

class SDagg: public Item{
	public:
		SDagg():Item(){
			name = "Standard Dagger";
			itemType = 2;
			price = 25;
			desc = "+2 attack";
			effect.push_back(pair<int,int>(0, 2));
		}	
};

class SSword: public Item{
	public:
		SSword():Item(){
			name = "Standard Sword";
			itemType = 1;
			price = 25;
			desc = "+4 attack";
			effect.push_back(pair<int,int>(0, 4));
		}	
};

class SGaunt: public Item{
	public:
		SGaunt():Item(){
			name = "Standard Gauntlets";
			itemType = 4;
			price = 25;
			desc = "+5 attack\n-1 special defense";
			effect.push_back(pair<int,int>(0, 5));
			effect.push_back(pair<int,int>(3, -1));
		}
};

class BStar: public Item{
	public:
		BStar():Item(){
			name = "Burning Star";
			itemType = 7;
			price = 60;
			desc = "+7 attack";
			effect.push_back(pair<int,int>(0, 7));
		}	
};

class HNun: public Item{
	public:
		HNun():Item(){
			name = "Heavy Nunchucks";
			itemType = 5;
			price = 70;
			desc = "+8 attack\n+2 defense\n+2 health";
			effect.push_back(pair<int,int>(0, 8));
			effect.push_back(pair<int,int>(1, 2));
			effect.push_back(pair<int,int>(5, 2));
		}
};

class StrLance: public Item{
	public:
		StrLance():Item(){
			name = "Strong Lance";
			itemType = 3;
			price = 65;
			desc = "+8 attack\n+3 health";
			effect.push_back(pair<int,int>(0, 8));
			effect.push_back(pair<int,int>(5, 3));
		}	
};

class PStaff: public Item{
	public:
		PStaff():Item(){
			name = "Pixie Staff";
			itemType = 6;
			price = 75;
			desc = "+10 special attack\n-1 defense";
			effect.push_back(pair<int,int>(2, 10));
			effect.push_back(pair<int,int>(1, -1));
		}
};

class SilShield: public Item{
	public:
		SilShield():Item(){
			name = "Silver Shield";
			itemType = 8;
			price = 80;
			desc =  "+6 special defense\n+6 defense\n+2 health";
			effect.push_back(pair<int,int>(3, 6));
			effect.push_back(pair<int,int>(1, 6));
			effect.push_back(pair<int,int>(5, 2));
		}	
};

class SilSword: public Item{
	public:
		SilSword():Item(){
			name = "Silver Sword";
			itemType = 1;
			price = 70;
			desc = "+7 attack\n+2 special defense\n+1 defense";
			effect.push_back(pair<int,int>(0, 7));
			effect.push_back(pair<int,int>(3, 2));
			effect.push_back(pair<int,int>(1, 1));
		}	
};

class TDagg: public Item{
	public:
		TDagg():Item(){
			name = "Thief Dagger";
			itemType = 2;
			price = 70;
			desc = "+6 attack";
			effect.push_back(pair<int,int>(0, 6));
		}	
};

class IGaunt: public Item{
	public:
		IGaunt():Item(){
			name = "Ice Gauntlets";
			itemType = 4;
			price = 75;
			desc = "+10 attack\n-2 special defense";
			effect.push_back(pair<int,int>(0, 10));
			effect.push_back(pair<int,int>(3, -2));
		}	
};

class TStar: public Item{
	public:
		TStar():Item(){
			name = "Toxic Star";
			itemType = 7;
			price = 150;
			desc = "+20 attack";
			effect.push_back(pair<int,int>(0, 20));
		}	
};

class BLance: public Item{
	public:
		BLance():Item(){
			name = "Bulky Lance";
			itemType = 3;
			price = 135;
			desc = "+20 attack\n+5 health";
			effect.push_back(pair<int,int>(0, 20));
			effect.push_back(pair<int,int>(5, 5));
		}	
};

class FStaff: public Item{
	public:
		FStaff():Item(){
			name = "Forest Staff";
			itemType = 6;
			price = 160;
			desc = "+22 attack\n+2 health";
			effect.push_back(pair<int,int>(0, 22));
			effect.push_back(pair<int,int>(5, 2));
		}
};

class CNun: public Item{
	public:
		CNun():Item(){
			name = "Concrete Nunchucks";
			itemType = 5;
			price = 155;
			desc = "+20 attack";
			effect.push_back(pair<int,int>(0, 20));
		}	
};

class DDagg: public Item{
	public:
		DDagg():Item(){
			name = "Dusk Dagger";
			itemType = 2;
			price = 160;
			desc = "+18 attack";
			effect.push_back(pair<int,int>(0, 18));
		}	
};

class GShield: public Item{
	public:
		GShield():Item(){
			name = "Golden Shield";
			itemType = 8;
			price = 170;
			desc = "+15 defense\n+15 special defense\n+8 health\n-2 speed";
			effect.push_back(pair<int,int>(1, 15));
			effect.push_back(pair<int,int>(3, 15));
			effect.push_back(pair<int,int>(5, 8));
			effect.push_back(pair<int,int>(4, -2)); 
		}	
};

class GSword: public Item{
	public:
		GSword():Item(){
			name = "Golden Sword";
			itemType = 1;
			price = 180;
			desc = "+22 attack\n+5 health";
			effect.push_back(pair<int,int>(0, 22));
			effect.push_back(pair<int,int>(5, 5));
		}	
};

class CGaunt: public Item{
	public:
		CGaunt():Item(){
			name = "Cinderblock Gauntlets";
			itemType = 4;
			price = 150;
			desc = "+20 attack\n-3 special defense";
			effect.push_back(pair<int,int>(0, 20));
			effect.push_back(pair<int,int>(3, -3));
		}	
};

class SStar: public Item{
	public:
		SStar():Item(){
			name = "Super Star";
			itemType = 7;
			price = 300;
			desc = "+50 attack\n+5 speed";
			effect.push_back(pair<int,int>(0, 50));
			effect.push_back(pair<int,int>(4, 5));
		}	
};

class SerLance: public Item{
	public:
		SerLance():Item(){
			name = "Serpent Lance";
			itemType = 3;
			price = 300;
			desc = "+45 attack\n+10 health";
			effect.push_back(pair<int,int>(0, 45));
			effect.push_back(pair<int,int>(5, 10));
		}	
};

class NNun: public Item{
	public:
		NNun():Item(){
			name = "Numbing Nunchucks";
			itemType = 5;
			price = 300;
			desc = "+50 attack\n+4 health";
			effect.push_back(pair<int,int>(0, 50));
			effect.push_back(pair<int,int>(5, 4));
		}	
};

class SacStaff: public Item{
	public:
		SacStaff():Item(){
			name = "Sacred Staff";
			itemType = 6;
			price = 300;
			desc = "+50 special attack\n+10 health";
			effect.push_back(pair<int,int>(2, 50));
			effect.push_back(pair<int,int>(5, 10));
		}	
};

class WDagg: public Item{
	public:
		WDagg():Item(){
			name = "Wolf Dagger";
			itemType = 2;
			price = 300;
			desc = "+50 attack\n+5 speed";
			effect.push_back(pair<int,int>(0, 50));
			effect.push_back(pair<int,int>(4, 5));
		}
};

class OShield: public Item{
	public:
		OShield():Item(){
			name = "Ordained Shield";
			itemType = 8;
			price = 300;
			desc = "+50 defense\n+50 special defense\n+20 health";
			effect.push_back(pair<int,int>(1, 50));
			effect.push_back(pair<int,int>(3, 50));
			effect.push_back(pair<int,int>(5, 20));
		}	
};

class HSword: public Item{
	public:
		HSword():Item(){
			name = "Holy Sword";
			itemType = 1;
			price = 300;
			desc = "+50 attack\n+10 special defense\n+10 health";
			effect.push_back(pair<int,int>(0, 50));
			effect.push_back(pair<int,int>(3, 50));
			effect.push_back(pair<int,int>(5, 10));
		}	
};

class BGaunt: public Item{
	public:
		BGaunt():Item(){
			name = "Bear Gauntlets";
			itemType = 4;
			price = 300;
			desc = "+50 attack\n+10 health\n+2 speed";
			effect.push_back(pair<int,int>(0, 50));
			effect.push_back(pair<int,int>(5, 10));
			effect.push_back(pair<int,int>(3, 2));
		}	
};

class LTrinket: public Item{
	public:
		LTrinket():Item(){
			name = "Lucky Trinket";
			itemType = 0;
			price = 500;
			desc = "+50 attack\n+50 defense\n+50 special attack\n+50 special defense\n+50 speed";
			effect.push_back(pair<int,int>(0, 50));
			effect.push_back(pair<int,int>(1, 50));
			effect.push_back(pair<int,int>(2, 50));
			effect.push_back(pair<int,int>(3, 50));
			effect.push_back(pair<int,int>(4, 50));
		}
};
#endif
