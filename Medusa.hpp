#ifndef Medusa_HPP
#define Medusa_HPP
#include <iostream>
#include <string>
#include "Creature.hpp"

using namespace std;

class Medusa : public Creature{
	private:
		bool wonByDefault;//special
	public:
                Medusa();
		string getType();
                int getArmor();
                int getStrengthPoints();
                int attack();
                int rollAttack();
                int rollDefense();
                bool isDead();
                bool defaultWin();
		void printResults();
		~Medusa();

}; 

#endif
