#include <string>
#include <iostream>

using namespace std;

#ifndef Player_H
#define Player_H

class Player
{
public:
	Player();
	Player(string name);
	~Player();

	string getName() const;
	int getMoney() const;
	int getWins() const;
	int getLosses() const;
	
	void quit();
	void removeMoney(int amount);
	void addMoney(int amount);
	void addWin();
	void addLoss();
	void addTimePlayed();

private:
	int money;
	int timesPlayed;
	int wins;
	int losses;
	string name;
};

#endif;