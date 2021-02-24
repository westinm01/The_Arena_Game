#ifndef __DATABASE_HPP__
#define __DATABASE_HPP__

#include <initializer_list>
#include <vector>
#include <iosfwd>


class Database
{
    vector<Character*> enemies;    

public:
    ~Database(){}

    Character* getEnemy(string choice){
 	if(enemies.size() != 0){		
		if(choice == "1"){
			return enemies.at(0);
		}	
		if(choice == "2"){
			return enemies.at(1);
		}
		if(choice == "3"){
			return enemies.at(2);
		}
		if(choice == "4"){
			return enemies.at(3);
		}
		if(choice == "5"){
			return enemies.at(4);
		} else {
			std::cout << "Invalid selection" << std::endl;
		}
	} else {
		std::cout << "ERROR: Empty database" << std::endl;
	}
	return 0;   
    }
    
    void clear(){
	enemies.clear();
    }
  
    void add_enemy(Character* enemy){
	enemies.push_back(enemy);
    }
    
};
   
#endif //__DATABASE_HPP__
