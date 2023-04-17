#ifndef GAME_H
#define GAME_H

#include "Game.h"

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <vector>

using namespace std;

class Game
{
    public:
    string startGame(string gameName, vector<string> arrowArr, int amt);
    int tracker(int amt);
};

#endif