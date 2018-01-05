#include <iostream>
#include "BlueMen.hpp"
#include "cstdlib"

BlueMen::BlueMen(){
	type = "BlueMen";
        armor = 3;
        strengthPoints = 12;
        dead = false;
	loseDefDie = 0;
}

string BlueMen::getType(){
        return type;
}

int BlueMen::getArmor(){
        return armor;
}

int BlueMen::getStrengthPoints(){
        return strengthPoints;
}

int BlueMen::attack(){
        int damage = rollAttack();
        cout << "Blue Men attack and produce " << damage << " damage points towards opponent." << endl;
        attacker = true;
	return damage;
}


int BlueMen::rollAttack(){//attack 2d10 (rolling two 10-sided die)
        int roll1 = rand() % 10 + 1; //random number between 1-10
        int roll2 = rand() % 10 + 1; //2nd die, random number between 1-10
	int roll = roll1 + roll2;
	attackVal = roll;
	return roll;
}


int BlueMen::rollDefense(){//defense 3d6 (rolling three 6-sided die)
	int roll1 = rand() % 6 + 1; //random number between 1-6
        int roll2 = rand() % 6 + 1; //2nd die, random number between 1-6
        int roll3 = rand() % 6 + 1; //3rd die, random number between 1-6
        int roll;

	if (strengthPoints <= 8 && strengthPoints > 4){//lose one defense die
	        cout << "Blue Men roll 2 dice " << endl;
		roll = roll1 + roll2;
        }
	else if (strengthPoints <=4 && strengthPoints > 0){//lose two defense die
                cout << "Blue Men roll 1 die " << endl;
		roll = roll1;
        }
	else {
		cout << "Blue Men roll 3 die " << endl;
		roll = roll1 + roll2 + roll3;
	}
	defenseVal = roll;
	return roll;
	
}

bool BlueMen::isDead(){
        return dead;
}

void BlueMen::printResults(){
	Creature::printResults();

}

BlueMen::~BlueMen(){

}
