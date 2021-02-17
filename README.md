 
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

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
