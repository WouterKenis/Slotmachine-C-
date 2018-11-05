#include <iostream>
#include <string>
#include "stdafx.h"
#include "Slotmachine.h"
#include "Player.h"

using namespace std;

int main()
{
	string command;
	string name;

	cout << "Welcome to the Slotmachines!" << endl;
	cout << "What's your name?" << endl;
	cin >> name;

	Player player(name);
	Slotmachine slotmachine(player);

	cout << "Hello, " + player.getName() + ". You will start with €" + to_string(player.getMoney()) + ". Good luck." << endl;
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
				cout << "Thanks for playing!" << endl;
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