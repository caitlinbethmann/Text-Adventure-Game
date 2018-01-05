/*************************
 * Author: Caitlin Bethmann
 * Date: 8/4/17
 * Description: Creature abstract base class. 
 * **************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include "Creature.hpp"


Creature::Creature(){
	srand(time(NULL));
}

Creature::~Creature(){
}

string Creature::getType(){
	return type;
}

int Creature::getArmor(){
	return armor;
}

int Creature::getStrengthPoints(){
	return strengthPoints;
}

bool Creature::isDead(){
	return dead;
}

bool Creature::isAttacker(){
	return attacker;
}

int Creature::attack(){
	return 0;
}

int Creature::defense(int x){
	int damage;
	int def = rollDefense();
	cout << "Attack dice rolled: " << x << endl;
	cout << "Defense dice rolled: " << def << endl;	
	cout << "\n";
	damage = x - def - armor;//damage done is the attack value rolled minus the defense value rolled minus the armor of the defender
	if(damage >= 0){
		strengthPoints = strengthPoints - damage;
		if(strengthPoints <= 0){
			dead = true;
		}
	}
	attacker = false;
	return def;			
	
}

int Creature::rollAttack(){
	attackVal = 0;
	return 0;
}

int Creature::rollDefense(){
	defenseVal = 0;
	return 0;
}

bool Creature::defaultWin(){
	return false;
			
}

void Creature::kill(){
	strengthPoints = 0;
	dead = true;	
}

void Creature::printResults(){

	if(attacker){
                cout << "Attacking value: " << attackVal << endl;
        }
        else {
                cout << "Defending value: " << defenseVal << endl;
        }

	cout << "Current Armor points: " << armor << endl;
        cout << "Current Strength points: " << strengthPoints << endl;

}
