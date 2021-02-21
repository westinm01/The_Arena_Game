fndef __DATABASE_HPP__
#define __DATABASE_HPP__

#include <initializer_list>
#include <vector>
#include <iosfwd>


class Database
{
    vector<Character> enemies;    

public:
    ~Database(){}

    Character* getEnemy(int choice){
 	if(enemies.size() != 0){	
     		switch (choice){
		case "1":
			return enemies.at(0);
			break;
		case "2":
			return enemies.at(1);
			break;
		case "3":
			return enemies.at(2);
			break;
		case "4":
			return enemies.at(3);
			break;
		case "5":
			return enemies.at(4);
			break;
		default:
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
