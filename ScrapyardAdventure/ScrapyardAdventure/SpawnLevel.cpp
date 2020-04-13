#include "SpawnLevel.h"

using namespace std;

SpawnLevel::SpawnLevel(string path) : Level(path)
	{
		cout << "Level(path) --called\n";
	}

	void SpawnLevel::loadLevel(string path)
	{
		cout << "SpawnLevel::loadLevel(string path) -- called\n"; 
	}

	void SpawnLevel::generateLevel()
	{
		cout << "SpawnLevel::generateLevel() -- called\n";
	}
