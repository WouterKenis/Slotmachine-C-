#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	cout << "Welcome to the Slotmachines!" << endl;
	cout << "Type 'pull' to play." << endl;
	cout << "Type 'stop' to quit." << endl;

	string response;

	cin >> response;

	if (cin.get() == 'pull') {
		cout << "yes" << endl;
	}
	else {
		cout << "no";
	}
	srand(time(0));

	int randomNumberOne = rand() % 6;
	int randomNumberTwo = rand() % 6;
	int randomNumberThree = rand() % 6;

	string symbols[6] = { "Zink", "Copper", "Iron", "Silver", "Gold", "Platinum" };

	cout << symbols[randomNumberOne] + " - " + symbols[randomNumberTwo] + " - " + symbols[randomNumberThree];
	cin.get();
	
	//ye boi
	return 0;
}

