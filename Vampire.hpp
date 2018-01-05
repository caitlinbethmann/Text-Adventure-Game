#ifndef Vampire_HPP
#define Vampire_HPP
#include <iostream>
#include <string>
#include "Creature.hpp"

using namespace std;

class Vampire : public Creature{
	private:
		int charm;//special ability
	public:
		Vampire();
		string getType();
		int getArmor();
		int getStrengthPoints();
		int attack();
		int defense(int x);
		int rollAttack();
		int rollDefense();
		void printResults();
		bool isDead();
		~Vampire();
};

#endif
