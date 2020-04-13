#pragma once

#include "Level.h"
#include "Constants.h"

class LevelFactory
{
public:
	static Level* getObject(LevelID levelId);
	static Level* getObject(std::string path);
	static Level* getObject(int height, int width);
};

