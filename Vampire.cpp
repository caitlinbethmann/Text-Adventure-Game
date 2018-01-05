#include "Vampire.hpp"
#include <iostream> 
#include <cstdlib>

Vampire::Vampire(){
	type = "Vampire";
	armor = 1;
	strengthPoints = 18;
	dead = false;
}

string Vampire::getType(){
	return type;
}

int Vampire::getArmor(){
	return armor;
}

int Vampire::getStrengthPoints(){
	return strengthPoints;
}

int Vampire::attack(){
	int damage = rollAttack();
	cout << "Vampire attacks and produces " << damage << " damage points towards opponent." << endl;
	attacker = true;
	return damage;
}

int Vampire::defense(int x){
	//use special ability here
	int charm = rand() % 2 + 1;//50% chance opponent doesn't attack vampire
	if (charm == 1){
		cout << "Vampire's special ability was used and opponent was charmed into not attacking. Vampire's does not receive any damage points. " << endl; 
		return 0;
	}
	else{	
		
		return Creature::defense(x);
	}

}

int Vampire::rollAttack(){//attack 1d12 (rolling one 12-sided die)
	int roll = rand() % 12 + 1; //random number between 1-12
	attackVal = roll;
	return roll;
}

int Vampire::rollDefense(){//defense 1d6 (rolling one 6-sided die)
	int roll = rand() % 6 + 1; //random number between 1-6
	defenseVal = roll;
	return roll;
}		 

bool Vampire::isDead(){
	return dead;
}

void Vampire::printResults(){
	Creature::printResults();
}

Vampire::~Vampire(){

}
