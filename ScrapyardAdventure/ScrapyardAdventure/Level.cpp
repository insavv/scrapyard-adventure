#include "Level.h"

using namespace std;

Level::Level(int height, int width)
{
    this->height = height;
    this->width = width;
    tilesInt.reserve(width * height);
}

Level::Level(string path)
{

}

void Level::time()
{
    cout << "Level::time() -- called\n";
}

void Level::update()
{
    cout << "Level::update() -- called\n";
}

void Level::render()
{
    cout << "Level::render() -- called\n";
}

void Level::generateLevel()
{
    cout << "Level::generateLevel() -- called\n";
}