#ifndef RANDOMWALK_H
#define RANDOMWALK_H


#include "Game.h"
#include "RandomWalk.h"

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;

class RandomWalk : public Game
{
    private:
    vector<string> dirArr;
    int initx,inity,finalx,finaly;

    public:
    RandomWalk(vector<string> arrowArr);
    string process();
};

#endif