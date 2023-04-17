#ifndef CHARGEABLE_H
#define CHARGEABLE_H

#include "Chargeable.h"

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <vector>
using namespace std;

class Chargeable
{
    private:
    int m_amount;

    public:
    virtual void recharge(int amt)=0;
};

#endif