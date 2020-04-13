#include "RandomLevel.h"

using namespace std;

RandomLevel::RandomLevel(int height, int width) : Level(height, width)
{
	cout << "Level(height, width) -- called\n";
}

void RandomLevel::generateLevel()
{
	cout << "RandomLevel::generateLevel() -- called\n";
}

void RandomLevel::loadLevel(std::string path)
{
	cout << "RandomLevel::loadLevel(std::string path) --called(might not be usable)\n";
}
