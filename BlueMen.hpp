#ifndef BlueMen_HPP
#define BlueMen_HPP
#include <iostream>
#include <string>
#include "Creature.hpp"

using namespace std;

class BlueMen : public Creature{
	private:
		int loseDefDie;//special
	public:
                BlueMen();
		string getType();
                int getArmor();
                int getStrengthPoints();
                int attack();
                int rollAttack();
                int rollDefense();
                void printResults();
		bool isDead();
		~BlueMen();

};

#endif
