/************************
 * Author: Caitlin Bethmann
 * Date: 8/4/17
 * Description: userFuncs contains the menu for the fantasy combat game as well as the function that carries out the fighting between the two creatures. 
**************************/

#include <iostream>
#include <cstdlib>
#include "userFuncs.hpp"

using namespace std;

int userFuncs::menu(string c){

	cout << "---------Fantasy Combat Game-----------" << endl << endl;
	cout << "Main Menu" << endl;
	cout << "Press 1 for Vampire" << endl;
	cout << "Press 2 for Barbarian" << endl;
	cout << "Press 3 for Blue Men" << endl;
	cout << "Press 4 for Medusa" << endl;
	cout << "Press 5 for Harry Potter" << endl << endl;


	int choice = 0;
	while (choice < 1 || choice > 5){

		cout << "What do you want the " << c << " creature to be? " << endl;
		cin >> choice;
		if (choice < 1 || choice > 5){
			cout << "ERROR: Invalid input" << endl;
		}
	}
	return choice;



}


void userFuncs::runGame(){
	int c1, c2;

	Creature* creature1;
	Creature* creature2;

	c1 = menu("first");
	c2 = menu("second");

	//create creature1 based on c1
	if (c1 == 1){
		cout << "You have chosen Vampire as your first creature" << endl;
		creature1 = new Vampire();
	}
	else if (c1 == 2){
		cout << "You have chosen Barbarian as your first creature" << endl;
		creature1 = new Barbarian();
	}
	else if (c1 == 3){
		cout << "You have chosen Blue Men as your first creature" << endl;
		creature1 = new BlueMen();
	}
	else if (c1 == 4){
		cout << "You have chosen Medusa as your first creature" << endl;
		creature1 = new Medusa();
	}
	else if (c1 == 5){
		cout << "You have chosen Harry Potter as your first creature" << endl;
		creature1 = new HarryPotter();
	}

	//create creature2 based on c2
	if (c2 == 1){
		cout << "You have chosen Vampire as your second creature" << endl;
		creature2 = new Vampire();
	}
	else if (c2 == 2){
		cout << "You have chosen Barbarian as your second creature" << endl;
		creature2 = new Barbarian();
	}
	else if (c2 == 3){
		cout << "You have chosen Blue Men as your second creature" << endl;
		creature2 = new BlueMen();
	}
	else if (c2 == 4){
		cout << "You have chosen Medusa as your second creature" << endl;
		creature2 = new Medusa();
	}
	else if (c2 == 5){
		cout << "You have chosen Harry Potter as your second creature" << endl;
		creature2 = new HarryPotter();
	}

	//choose which creature to attack first
	int random = rand() % 2 + 1;
	
	if (random == 1){
		cout << "Creature 1 is attacking first" << endl;
	}
	else{
		cout << "Creature 2 is attacking first" << endl;
	}

	Creature* creatureA;
	Creature* creatureD;
	Creature* temp;

	if(random == 1){
		creatureA = creature1;
		creatureD = creature2;
	}
	else{
		creatureA = creature2;
		creatureD = creature1;
	}


	int round = 0;

	do {
		round++;
		cout << "Round: " << round << endl;

		int attacking;
		int defending;
		attacking = creatureA->attack();
		defending = creatureD->defense(attacking);

		if(defending != 0){
			if(creatureA->defaultWin()){
				creatureD->kill();

			}
		}	
		
		cout << creatureA->getType() << " information: " << endl;
		creatureA->printResults();
		cout << "\n";
		cout << creatureD->getType() << " information: " << endl;
		creatureD->printResults();
		cout << "\n";

		//switches the creatures so that they take turns attacking each round
		temp = creatureA;
		creatureA = creatureD;
		creatureD = temp;

	}while(!creature1->isDead() && !creature2->isDead());

	if(creatureA->isDead()){
		cout << creatureA->getType() << " died." << endl;
		cout << creatureD->getType() << " wins!!!" << endl;
	}
	else if(creatureD->isDead()){
		cout << creatureA->getType() << " wins!!!" << endl;
		cout << creatureD->getType() << " died.!" << endl;
	}  


	delete creature1;
	delete creature2;	
	creature1 = NULL;
	creature2 = NULL;
	creatureA = NULL;
	creatureD = NULL;
	temp = NULL;
}





