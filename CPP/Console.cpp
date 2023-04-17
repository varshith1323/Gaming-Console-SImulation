#include "Console.h"
#include "Game.h"

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <vector>
#include <iterator>
#include <list>
using namespace std;

    string Console::startConsole(Game gameObj, string gameName, vector<string>arrowArr, int amt)
    {
        m_game=gameObj;
        return(m_game.startGame(gameName, arrowArr, amt));
    }
