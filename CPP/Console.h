#ifndef CONSOLE_H
#define CONSOLE_H

#include "Console.h"
#include "Game.h"

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;

class Console
{
    private:
    Game m_game;

    public:
    string startConsole(Game gameObj, string gameName, vector<string> arrowArr, int amt);
};

#endif