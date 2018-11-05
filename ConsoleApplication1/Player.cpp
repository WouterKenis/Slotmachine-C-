#include "stdafx.h"
#include "Player.h"

Player::Player()
{
	money = 200;
	wins = 0;
	timesPlayed = 0;
	losses = 0;

}

Player::Player(string name) {
	money = 200;
	wins = 0;
	timesPlayed = 0;
	losses = 0;
	this->name = name;
}


Player::~Player()
{
}

void Player::quit() {
	exit(0);
}

void Player::removeMoney(int amount) {
	money = money - amount;
}

void Player::addMoney(int amount) {
	money = money + amount;
}

void Player::addLoss() {
	losses = losses + 1;
}

void Player::addWin() {
	wins = wins + 1;
}

void Player::addTimePlayed() {
	timesPlayed = timesPlayed + 1;
}

string Player::getName() const {
	return name;
}

int Player::getLosses() const {
	return losses;
}

int Player::getWins() const {
	return wins;
}

int Player::getMoney() const {
	return money;
}