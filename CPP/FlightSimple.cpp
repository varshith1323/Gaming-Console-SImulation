
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
#include <iterator>
#include <list>
using namespace std;

    
    FlightSimple::FlightSimple (vector<string> arrowArr)
    {
        dirArr=arrowArr;
    }

    void FlightSimple::recharge(int amt) //set method
    {
        m_amount=amt;
    }


    string FlightSimple::process()
    {
        int speed=0, height=0;
        if((unsigned long)m_amount<dirArr.size())
        {
            return("FlightSimple: Game Over");
        }
        for(int j=0;j<tracker(m_amount);j++) //this for loop keeps track of the number of commands
        {
            if(dirArr[j]==("R"))
            {
                speed+=1;                
            }

            if(dirArr[j]==("L"))
            {
                if(speed>0)
                {
                    speed-=1; 
                } 
            }

            if(dirArr[j]==("U"))
            {
                if(height==0)
                {
                    if(speed>2)
                    {
                        height+=1;
                    }
                }

                else
                {
                    height+=1;
                }
            }

            if(dirArr[j]==("D"))
            {
                height-=1;                
            }

            if(height<0)
            {
                return("FlightSimple: Lost");
            }

            if(height>0 && speed==0)    
            {
                return("FlightSimple: Lost");
            }
        }
        if(height==0 && speed==0)
            return("FlightSimple: Won");
        else
            return("FlightSimple: Game Over");
    }
