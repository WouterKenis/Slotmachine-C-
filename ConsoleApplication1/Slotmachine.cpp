#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;
string pull() {

	srand(time(0));

	int randomNumberOne = rand() % 6;
	int randomNumberTwo = rand() % 6;
	int randomNumberThree = rand() % 6;

	string symbols[6] = { "Zink", "Copper", "Iron", "Silver", "Gold", "Platinum" };

	return symbols[randomNumberOne] + " - " + symbols[randomNumberTwo] + " - " + symbols[randomNumberThree];
}

int main()
{
	cout << "Welcome to the Slotmachines!" << endl;
	cout << "Type 'pull' to play." << endl;
	cout << "Type 'stop' to quit." << endl;

	string response;

	cin >> response;

	while (response != "stop") {
		if (response == "pull") {
			cout << pull() << endl;
			cin >> response;
		}
		else {
			if (response == "stop") {
				exit(0);
			}
			else {
				cout << "Invalid option. Please use 'pull' or 'stop'" << endl;

				cin >> response;
			}
		}
	}
	return 0;
}

