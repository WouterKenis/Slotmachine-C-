#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "Slotmachine.h"

using namespace std;

Slotmachine::Slotmachine()
{
}

Slotmachine::Slotmachine(Player player)
{
	player = player;
}


Slotmachine::~Slotmachine()
{
}

void Slotmachine::addPlayer(Player player) {
	player = player;
}

Player Slotmachine::getPlayer() const {
	return player;
}

string Slotmachine::pull() {
	srand(time(0));

	int randomNumberOne = rand() % 6;
	int randomNumberTwo = rand() % 6;
	int randomNumberThree = rand() % 6;

	string symbols[6] = { "Zink", "Copper", "Iron", "Silver", "Gold", "Platinum" };

	return symbols[randomNumberOne] + " - " + symbols[randomNumberTwo] + " - " + symbols[randomNumberThree];
}



