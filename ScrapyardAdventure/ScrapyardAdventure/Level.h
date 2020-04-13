#pragma once

#include<iostream>
#include<vector>

class Level
{
private:
    void time();

protected:
    int width, height;
    std::vector<int> tilesInt;
    std::vector<int> tiles;

public:
    Level(int height, int width);
    Level(std::string path);
    void render();
    void update();

    virtual void generateLevel() = 0;
    virtual void loadLevel(std::string path) = 0;
};