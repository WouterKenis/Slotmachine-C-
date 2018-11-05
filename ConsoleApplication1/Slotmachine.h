#pragma once

#include "Player.h"

#ifndef Slotmachine_H
#define Slotmachine_H

class Slotmachine
{
public:
	Slotmachine();
	Slotmachine(Player player);
	~Slotmachine();

	Player getPlayer() const;

	void addPlayer(Player player);
	string pull();

private:
	Player player;
};


#endif;