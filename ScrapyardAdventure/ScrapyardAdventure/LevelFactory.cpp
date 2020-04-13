#include "LevelFactory.h"
#include "SpawnLevel.h"
#include "RandomLevel.h"

Level* LevelFactory::getObject(std::string path)
{
	Level* spawnLevelObj = new SpawnLevel(path);
	spawnLevelObj->loadLevel(path);
	return spawnLevelObj;
}

Level* LevelFactory::getObject(int height, int width)
{
	Level* randomLevelObj = new RandomLevel(height, width);
	randomLevelObj->generateLevel();
	return randomLevelObj;
}
