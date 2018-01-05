#ifndef Creature_HPP
#define Creature_HPP
#include <iostream>
#include <string>

using namespace std;

class Creature{
	public:
		string type;
		int armor;
		double strengthPoints;
		bool dead;
		bool attacker;
		int attackVal;
		int defenseVal;

		Creature();
		virtual string getType() = 0;
		virtual int getArmor() = 0;
		virtual int getStrengthPoints() = 0;
		virtual bool isDead() = 0;
		virtual bool isAttacker();
		virtual int attack() = 0;
		virtual int defense(int x);
		virtual int rollAttack() = 0;
		virtual int rollDefense() = 0;
		virtual bool defaultWin();
		virtual void printResults();
		virtual void kill();
		~Creature();

};

#endif
