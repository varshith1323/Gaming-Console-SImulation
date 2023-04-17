#ifndef FLIGHTSIMPLE_H
#define FLIGHTSIMPLE_H

#include "Chargeable.h"
#include "Game.h"
#include "FlightSimple.h"

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;

class FlightSimple : public Game, public Chargeable
{
    private:
    vector<string> dirArr;

    public:
    int m_amount;
    FlightSimple(vector<string> arrowArr);
    void recharge(int amt);
    string process();
};

#endif