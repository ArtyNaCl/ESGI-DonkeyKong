// DonkeyKong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Game.h"
#include "RessourcesManager.h"

int main()
{
    RessourcesManager manager;
	Game game(manager);

	game.run();
}
