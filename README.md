 
# The Arena: RPG Battle Game
 
 > Authors: [Westin Montano](github.com/westinm01), [Muneeb Ghori](github.com/muneebghori), [Briana McGhee](github.com/bmcghee98)
 
 
 


## Project Description

 
   **Why is it important or interesting to you?**
 
 > We decided to create an RPG game not only because it would be a fun experience, but it would also give us the space to play around with and incorporate some of the concepts that we have been learning during the course of this class.
 
   **What languages/tools/technologies do you plan to use? (This list may change over the course of the project)**
  
 > This project will be written in C++, and will include a database system for generating enemy types, characters, weapons, and abilities.
 
  **What will be the input/output of your project?**
 
 > This will be a turn-based RPG-style game where the player is given a prompt and is tasked with deciding what to do next within the battle. Depending on what the player decides to do, the game will react accordingly to their decision until either the player or enemy has been defeated.
 
  **What are the two design patterns you will be using?**
 
> We chose to implement Strategy pattern and Decorator pattern. We believe that Strategy pattern will be extremely viable when creating functions for a character's passive ability because each ability will take different inputs (health, defense, attack, opponent stats, etc) to perform its unique function, while all abilities work as a passive trait derived from the Ability class. The Strategy pattern will start with a base class of Ability, that is derived by a dozen ability classes. Each ability classes are unique to a specific ability, and they override Ability class' signature functions: trigger and perform. Each ability is triggered, but triggered differently based on input. Each ability also has a performing function, but the parameters and result of the functions differ for each ability. 
> 
> The Decorator pattern will be used in determining a character's stats that would be dependent on a fighting style interface, what weapon they wield, their ability, etc. These factors will be implemented into their own respective classes that in the end, make up a player's stats. The fighting style interface will depend on the character you select. We believe that a potential problem could be handling too much at once. For Decorator pattern, we may need to implement one for each stat rather than all stats together. As mentioned earlier, these patterns will work well with the ideas we stated, and this is going off of mainly our own research. We are also anticipating creating characters (with a total of 7-8 playable characters, and randomly-generated enemies) using Strategy pattern as well.
>
>Through Development we found that Factory pattern was an excellent method for creating characters dynamically. The beginning of the game has you select a character, and we only create 1 character dynamically here based on the user input. This input is taken in to the Character Factory, where it is used to determine what character to create.
>

## Class Diagram
 >  Class Diagram link: https://drive.google.com/file/d/1LAjs0aT9K9u4edpp5Ky5dcDy5Ojwzrsj/view?usp=sharing
 > Description: There will be a `Character` class, that is decorated with an ability depending on the character, as well as equippable items that alter the `Character`'s stats or affect gameplay. A `Character` has 4 `Attack`s, and these attacks fall into 1 of 3 categories as outlined in the UML. Each attack has a specific funciton, and we found that Strategy Pattern allows us to section off different types of attacks while giving them their unique behavior. There are several states that the game exists in, which are listed out in all available `Menu` classes. `Menu`s can definitely contain other menus, and allow ease of navigation from one menu to another `Menu`. We implemented Strategy Pattern here because all `Menu`s can display, but they all display differently and often with different content. The `Battle` class exists to store data that may trigger abilities in addition to being the flow of gameplay itself.
 
 ## Screenshots
 > https://drive.google.com/drive/folders/1YKXeeTi2CfFcxo8JIariBhVkjlnzBJ1J?usp=sharing
 ## Installation/Usage
 > To run the game, simply use the `g++ main.cpp -std=c++11` command, and afterwards use the `./a.out` command
 ## Testing
 > Testing was conducted using the googletest submodule. We did unit testing for every individual class and a few with some of the classes combined.
 
