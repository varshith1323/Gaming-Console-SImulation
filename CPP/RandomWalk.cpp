#include "Game.h"
#include "RandomWalk.h"

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

    RandomWalk::RandomWalk(vector<string> arrowArr) : Game()
    {
        dirArr=arrowArr;
    }

    string RandomWalk::process()
    {
        initx=10;
        inity=10;
        finalx=initx;
        finaly=inity;
        for(long unsigned int i=0; i<dirArr.size();i++)
        {
            if(dirArr[i]=="U")
            {
                finaly=finaly+1;
               //cout<<("\nfinaly="+to_string(finaly));
                
            }

            if(dirArr[i]=="D")
            {
                finaly=finaly-1;
               // cout<<("\nfinaly="+to_string(finaly));
            }

            if(dirArr[i]=="R")
            {
                finalx=finalx+1;
                //cout<<("\nfinalx="+to_string(finalx));
                
                //return "RandomWalk: None";
            }

            if(dirArr[i]=="L")
            {
                if(finalx>0)
                    finalx=finalx-1;

                //cout<<("\nfinalx="+to_string(finalx));

                //return "RandomWalk: None";
            }


        }
        if(finalx>=19 || finaly>=19)
            return("RandomWalk: Lost");
        if(finaly==0)
            return("RandomWalk: Won");
        else
            return ("RandomWalk: Game Over");
    }
