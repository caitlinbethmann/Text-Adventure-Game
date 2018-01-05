output: Vampire.o Barbarian.o BlueMen.o Medusa.o HarryPotter.o userFuncs.o Creature.o FantasyMain.o
	g++ Vampire.cpp Barbarian.cpp BlueMen.cpp Medusa.cpp HarryPotter.cpp Creature.cpp userFuncs.cpp FantasyMain.cpp -o output

FantasyMain.o: FantasyMain.cpp 
	g++ -c FantasyMain.cpp

userFuncs.o: userFuncs.cpp userFuncs.hpp
	g++ -c userFuncs.cpp 

Creature.o: Creature.cpp Creature.hpp
	g++ -c Creature.cpp

Vampire.o: Vampire.cpp Vampire.hpp
	g++ -c Vampire.cpp

Barbarian.o: Barbarian.cpp Barbarian.hpp
	g++ -c Barbarian.cpp

BlueMen.o: BlueMen.cpp BlueMen.hpp
	g++ -c BlueMen.cpp

Medusa.o: Medusa.cpp Medusa.hpp
	g++ -c Medusa.cpp

HarryPotter.o: HarryPotter.cpp HarryPotter.hpp
	g++ -c HarryPotter.cpp

clean:
	rm *.o output
