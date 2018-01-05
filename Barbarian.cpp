#include <iostream>
#include "Barbarian.hpp"
#include <cstdlib>

Barbarian::Barbarian(){
	type = "Barbarian";
	armor = 0;
	strengthPoints = 12;
	dead = false;
}

string Barbarian::getType(){
	return type;
}

int Barbarian::getArmor(){
	return armor;
}

int Barbarian::getStrengthPoints(){
	return strengthPoints;
}

int Barbarian::attack(){
	int damage = rollAttack();
	cout << "Barbarian attacks and produces " << damage << " damage points towards opponent." << endl;
	attacker = true;
	return damage;
}


int Barbarian::rollAttack(){//attack 2d6 (rolling two 6 sided dice)
	int roll1 = rand() % 6 + 1;//generate random number between 1-6
	int roll2 = rand() % 6 + 1;//2nd die, generate random number between 1-6
	
	int roll = roll1 + roll2;//adding together die rolls
	attackVal = roll;
	return roll;
}

int Barbarian::rollDefense(){//defense 2d6 (rolling two 6 sided dice)
	int roll1 = rand() % 6 + 1;//generate random number between 1-6
	int roll2 = rand() % 6 + 1;//2nd die, generate random number between 1-6

	int roll = roll1 + roll2;//adding together die rolls
	defenseVal = roll;
	return roll;
}

bool Barbarian::isDead(){
	return dead;
}

void Barbarian::printResults(){
	Creature::printResults();
}

Barbarian::~Barbarian(){

}
