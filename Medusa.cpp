#include <iostream>
#include "Medusa.hpp"
#include <cstdlib>

Medusa::Medusa(){
        type = "Medusa";
        armor = 3;
        strengthPoints = 8;
        dead = false;
	wonByDefault = false; 
}

string Medusa::getType(){
        return type;
}

int Medusa::getArmor(){
        return armor;
}

int Medusa::getStrengthPoints(){
        return strengthPoints;
}

int Medusa::attack(){
        int damage = rollAttack();

	if (damage == 12){//use glare
		cout << "Medusa used glare and turned her attacker into stone! " << endl;
		wonByDefault = true;
	}
	else if (damage != 12){
		wonByDefault = false;
        	cout << "Medusa attacks and produces " << damage << " damage points towards opponent." << endl;
	}
        attacker = true;
	return damage;
}

int Medusa::rollAttack(){//attack 2d6 (rolling two 6 sided dice)
        int roll1 = rand() % 6 + 1;//generate random number between 1-6
        int roll2 = rand() % 6 + 1;//2nd die, generate random number between 1-6
	int roll = roll1 + roll2;//adding together die rolls
	attackVal = roll;
	return roll;
}

int Medusa::rollDefense(){//defense 2d6 (rolling two 6 sided dice)
        int roll = rand() % 6 + 1;//generate random number between 1-6
	defenseVal = roll;
	return roll;
}

bool Medusa::isDead(){
	return dead;

}

bool Medusa::defaultWin(){
	return wonByDefault;

}
void Medusa::printResults(){
	Creature::printResults();

}

Medusa::~Medusa(){

}
