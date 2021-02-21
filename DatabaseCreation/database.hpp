fndef __DATABASE_HPP__
#define __DATABASE_HPP__

#include <initializer_list>
#include <vector>
#include <iosfwd>


class Database
{
    vector<Character> enemies;    
    string choice;

public:
    ~Database(){

    }

    Character* getEnemy(int choice){
     	if(choice == "1"){
		return new Vlad();
	}
	if(choiec =="2"){
		return new Kenny();
	}
	if(choice == "3"){
		return new Ryder();
	}
	if(choice == "4"){
		return new Loom();
	}
	if(choice == "5"){
		return new Shadow();
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
