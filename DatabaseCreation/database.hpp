#ifndef __DATABASE_HPP__
#define __DATABASE_HPP__

#include <initializer_list>
#include <vector>
#include <iosfwd>
#include <iostream>

class Database
{
    vector<Character*> characters;    

public:
    ~Database(){}
	Database(){
		
	}
    Character* getCharacter(string choice){
 	if(characters.size() != 0){		

			return characters.at(stoi(choice));
		}
		 else {
			std::cout << "Invalid selection" << std::endl;
		}
	} else {
		std::cout << "ERROR: Empty database" << std::endl;
	}
	return 0;   
    }
    
    void clear(){
	characters.clear();
    }
  
    void add_character(Character* c){
	characters.push_back(c);
    }
	void display_database(){
		if(characters.size()==0){
			cout<<"Database is empty."<<endl;
			return;
		}
		for(int i=0; i<characters.size();i++){
			cout<<i+1<<") "<<characters.at(i)->getName()<<endl;
		}
  }  
};
   
#endif //__DATABASE_HPP__
