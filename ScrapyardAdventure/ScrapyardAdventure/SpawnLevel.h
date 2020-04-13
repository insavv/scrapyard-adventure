#pragma once

#include "Level.h"

class LevelFactory;

class SpawnLevel : public Level
{
	void generateLevel();
	void loadLevel(std::string path);
	SpawnLevel(std::string path);

	friend LevelFactory;
};