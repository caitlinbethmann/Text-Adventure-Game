/***************************************
 * Author: Caitlin Bethmann
 * Date: 8/4/17
 * Description: Displays menu option to user to continue playing fantasy combat game or exit the program. Runs the fantasy combat game. 
 * ************************************/

#include <iostream>
#include <string>
#include "Creature.hpp"
#include "Vampire.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"
#include "userFuncs.hpp"

using namespace std;

int menu2();

int main(){

	int choice = 0;
	userFuncs game1;

	do {
		game1.runGame();
		choice = menu2();

	}while(choice != 2);
		

return 0;

}

int menu2(){
	int answer = 0;
	while (answer < 1 || answer > 2){

		cout << "What would you like to do? " << endl;
		cout << "Enter 1 to play the game again: " << endl;
		cout << "Enter 2 to exit the game: " << endl;
		cin >> answer;
		if (answer < 1 || answer > 2){
			cout << "ERROR: invalid input" << endl;
		}
	}
	return answer;
}
