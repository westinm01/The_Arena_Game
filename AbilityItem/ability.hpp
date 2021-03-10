#ifndef __ABILITY_HPP__
#define __ABILITY_HPP__

#include <iostream>
#include <string>

using namespace std;

class Ability{
	protected:
 		std::string name;
		std::string description;
	public:

		Ability(){}
		virtual ~Ability(){}

		std::string getName(){return name;}
		std::string getDescription(){return description;}
	
		//void setName() = 0;
		//void setDescription() = 0;
};

class ChivShield : public Ability {
	public:
		~ChivShield(){}
		ChivShield() : Ability() {
			this->name = "Chivalrous Shield";
			this->description = "Negates all damage upon being hit by a critical attack.";
		}

		virtual void applyAbilityAttributes(){}
};

class NinStealth : public Ability {
	public:
		~NinStealth(){}
		NinStealth() : Ability() {
			this->name = "Ninja Stealth";
			this->description = "Using a damaging move after a non-damaging move will critically hit.";
		}

		virtual void applyAbilityAttributes(){}
};

class PunkAtt : public Ability {
	public:
		~PunkAtt(){}
		PunkAtt() : Ability() {
			this->name = "Punk's Attitude";
			this->description = "Lowering a foe's stats increases speed by 2 stages.";
		}

		virtual void applyAbilityAttributes(){}
};

class MoD : public Ability {
	public:
		~MoD(){}
		MoD() : Ability() {
			this->name = "Master of Deception";
			this->description = "Every time a turn passes where Tuckson does not lose HP, his spatk and speed are boosted by 1 stage.";
		}

		virtual void applyAbilityAttributes(){}
};

class WitchWrath : public Ability {
	public:
		~WitchWrath(){}
		WitchWrath() : Ability() {
			this->name = "Witch's Wrath";
			this->description = "Winelle's spatk grows 2 stages when below half health.";
		}

		virtual void applyAbilityAttributes(){}
};

class SplitShade : public Ability {
	public:
		~SplitShade(){}
		SplitShade() : Ability() {
			this->name = "SplitShade";
			this->description = "Upon critically striking, attack increases by 1 stage.";
		}

		virtual void applyAbilityAttributes(){}
};

class Nightmare : public Ability {
	public:
		~Nightmare(){}
		Nightmare() : Ability() {
			this->name = "Nightmare";
			this->description = "Attacking a sleeping target deals twice the damage.";
		}

		virtual void applyAbilityAttributes(){}
};

class Jokester : public Ability {
	public:
		~Jokester(){}
		Jokester() : Ability() {
			this->name = "Jokester";
			this->description = "When the opponent hits themselves in confusion or has a stat lowered, Kenny heals his own status ailment and chooses one to put on the opponent.";
		}

		virtual void applyAbilityAttributes(){}
};

class CunThief : public Ability {
	public:
		~CunThief(){}
		CunThief() : Ability() {
			this->name = "Cunning Thief";
			this->description = "Upon attacking an enemy, steal one of their items, and choose to equip it or put it in inventory.";
		}

		virtual void applyAbilityAttributes(){}
};

class KnightAmb : public Ability {
	public:
		~KnightAmb(){}
		KnightAmb() : Ability() {
			this->name = "Knight's Ambition";
			this->description = "After being damaged by an enemy attack, gain a boost to defense and special defense by 1 stage.";
		}

		virtual void applyAbilityAttributes(){}
};

#endif
