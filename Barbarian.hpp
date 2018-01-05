#ifndef Barbarian_HPP
#define Barbarian_HPP
#include <iostream>
#include <string>
#include "Creature.hpp"

using namespace std;

class Barbarian : public Creature{
	public:
		Barbarian();
		string getType();
		int getArmor();
		int getStrengthPoints();
		int attack();
		int rollAttack();
		int rollDefense();
		void printResults();
		bool isDead();
		~Barbarian();
};

#endif
