

#include "Game.h"
#include "RandomWalk.h"
#include "FlightSimple.h"

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

    string Game::startGame(string gameName, vector<string> arrowArr, int amt)
    {
        //create objects of both games as required instead of doing what we did in main
        if(gameName=="RandomWalk")
        {
            RandomWalk rwObj(arrowArr);
            return(rwObj.process());
        }

        if(gameName=="FlightSimple")
        {
            FlightSimple fsObj(arrowArr);
            fsObj.recharge(amt);
            return(fsObj.process());
        }
        return NULL;
    }

    int Game::tracker(int amt)
    {
        return(amt);
    }

