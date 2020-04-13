#pragma once
#include "Level.h"

class LevelFactory;

class RandomLevel :
	public Level
{
public:
	RandomLevel(int height, int width);
	void generateLevel();
	void loadLevel(std::string path);
	friend LevelFactory;
};

