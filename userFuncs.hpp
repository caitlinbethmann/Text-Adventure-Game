#ifndef userFuncs_HPP
#define userFuncs_HPP
#include "Creature.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"
#include <iostream>
#include <string>

using namespace std;

class userFuncs{
	public:
		int menu(string);//opening game menu
		void runGame();//runs the fights between the two creatures
};

#endif

