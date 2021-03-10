#ifndef __DATABASE_HPP__
#define __DATABASE_HPP__

#include "../AbilityItem/item.hpp"
#include <initializer_list>
#include <vector>
#include <iosfwd>
#include <iostream>

using namespace std;

class Database
{
		vector<Item*> shopItems;    

	public:
		~Database(){}
		Database(){
		
		}
    		void fill_database(){
 			shopItems.push_back(new SLance());
			shopItems.push_back(new SStaff());
			shopItems.push_back(new SNun());
			shopItems.push_back(new SShield());
			shopItems.push_back(new SDagg());
			shopItems.push_back(new SSword());
			shopItems.push_back(new SGaunt());
			shopItems.push_back(new BStar());
			shopItems.push_back(new HNun());
			shopItems.push_back(new StrLance());
			shopItems.push_back(new PStaff());
			shopItems.push_back(new SilShield());
			shopItems.push_back(new SilSword());
			shopItems.push_back(new TDagg());
			shopItems.push_back(new IGaunt());
			shopItems.push_back(new TStar());
			shopItems.push_back(new BLance());
			shopItems.push_back(new FStaff());
			shopItems.push_back(new CNun());
			shopItems.push_back(new DDagg());
			shopItems.push_back(new GShield());
			shopItems.push_back(new GSword());
			shopItems.push_back(new CGaunt());
			shopItems.push_back(new SStar());
			shopItems.push_back(new SerLance());
			shopItems.push_back(new NNun());
			shopItems.push_back(new SacStaff());
			shopItems.push_back(new WDagg());
			shopItems.push_back(new OShield());
			shopItems.push_back(new HSword());
			shopItems.push_back(new BGaunt());
			shopItems.push_back(new LTrinket());
		}
    
		void clear(){
			shopItems.clear();
		}
  
	void display_database(){
		if(shopItems.size() == 0){
			cout << "Database is empty." << endl;
			return;
		}
		for(int i = 0; i < shopItems.size(); i++){
			cout << i+1 << ". " << shopItems.at(i)->getName() << endl;
		}
  }  
};
   
#endif //__DATABASE_HPP__
