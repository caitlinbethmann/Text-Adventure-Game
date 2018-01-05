#include <iostream>
#include "HarryPotter.hpp"
#include <cstdlib>

HarryPotter::HarryPotter(){
	type = "HarryPotter";
	armor = 0;
	strengthPoints = 10;
	dead = false;
	hogwarts = 0;

}

string HarryPotter::getType(){
        return type;
}

int HarryPotter::getArmor(){
        return armor;
}

int HarryPotter::getStrengthPoints(){
        return strengthPoints;
}

int HarryPotter::attack(){
        int damage = rollAttack();
        cout << "Harry Potter attacks and produces " << damage << " damage points towards opponent." << endl;
        attacker = true;
	return damage;
}

int HarryPotter::defense(int x){
	int def = Creature::defense(x);//calling creature defense
	if (dead == true && hogwarts == 0){//gives harry potter one more life
                dead = false;
                hogwarts++;
                strengthPoints = 20;
		cout << "Harry Potter dies but comes back to life! " << endl;
	}
	return def;
}

int HarryPotter::rollAttack(){//attack 2d6 (rolling two 6 sided dice)
        int roll1 = rand() % 6 + 1;//generate random number between 1-6
        int roll2 = rand() % 6 + 1;//2nd die, generate random number between 1-6

        int roll = roll1 + roll2;//adding together die rolls
	attackVal = roll;
        return roll;
}

int HarryPotter::rollDefense(){//defense 2d6 (rolling two 6 sided dice)
        int roll1 = rand() % 6 + 1;//generate random number between 1-6
        int roll2 = rand() % 6 + 1;//2nd die, generate random number between 1-6

        int roll = roll1 + roll2;//adding together die rolls
        defenseVal = roll;
	return roll;
}

bool HarryPotter::isDead(){
        return dead;
}

void HarryPotter::kill(){
	Creature::kill();
	if (dead == true && hogwarts == 0){
                dead = false;
                hogwarts++;
                strengthPoints = 20;

	}
}

void HarryPotter::printResults(){
	Creature::printResults();

}

HarryPotter::~HarryPotter(){

}

