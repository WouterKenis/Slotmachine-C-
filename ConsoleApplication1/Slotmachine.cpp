#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;
class Slotmachine
{
	public:
		Player player;

	string pull() {

		srand(time(0));

		int randomNumberOne = rand() % 6;
		int randomNumberTwo = rand() % 6;
		int randomNumberThree = rand() % 6;

		string symbols[6] = { "Zink", "Copper", "Iron", "Silver", "Gold", "Platinum" };

		return symbols[randomNumberOne] + " - " + symbols[randomNumberTwo] + " - " + symbols[randomNumberThree];
	}
};

class Player
{
	public:
		int money;
		int timesPlayed;
		int wins;
		int losses;
		string name;

	void quit() {
		exit(0);
	}
};


int main()
{
	string command;
	string name;
	Player player;
	Slotmachine slotmachine;

	cout << "Welcome to the Slotmachines!" << endl;
	cout << "What's your name?" << endl;
	cin >> name;

	player.name = name;
	player.money = 200;
	slotmachine.player = player;

	cout << "Hello, " + name + ". You will start with €200. Good luck."; << endl;
	cout << "Type 'pull' to play." << endl;
	cout << "Type 'stop' to quit." << endl;

	cin >> command;

	while (command != "stop") {
		if (command == "pull") {
			cout << slotmachine.pull() << endl;
			cin >> command;
		}
		else {
			if (command == "stop") {
				player.quit();
			}
			else {
				cout << "Invalid option. Please use 'pull' or 'stop'" << endl;

				cin >> command;
			}
		}
	}
	return 0;
}

