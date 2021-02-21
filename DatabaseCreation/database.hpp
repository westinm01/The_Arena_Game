fndef __DATABASE_HPP__
#define __DATABASE_HPP__

#include <initializer_list>
#include <vector>
#include <iosfwd>


class Database
{
    vector<Character> enemies;    
    int choice;

public:
    ~Database(){

    }

    Character* getEnemy(int choice){
        
    }

    void set_selection(String choice){
		
    }
    
    void clear(){
	enemies.clear();
    }
  
    void add_enemy(Character* enemy){
	enemies.push_back(enemy);
    }
    
};
   
#endif //__DATABASE_HPP__
