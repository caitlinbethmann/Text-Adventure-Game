#ifndef HarryPotter_HPP
#define HarryPotter_HPP
#include <iostream>
#include <string>
#include "Creature.hpp"

using namespace std;

class HarryPotter : public Creature{
	private: 
		int hogwarts;//special 
	public:
		HarryPotter();
                string getType();
                int getArmor();
                int getStrengthPoints();
                int attack();
                int defense(int x);
                int rollAttack();
                int rollDefense();
                void kill();
		bool isDead();
 		void printResults();
		~HarryPotter();

}; 

#endif
