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

    vector<string> split (string s) 
    {
        long unsigned int pos_start = 0, pos_end;
        string token;
        vector<string> res;

        while ((pos_end = s.find (" ", pos_start)) != string::npos) 
        {
            token = s.substr (pos_start, pos_end - pos_start);
            pos_start = pos_end + 1;
            res.push_back (token);
        }

        res.push_back (s.substr (pos_start));
        return res;
    }

    vector<string> readUserStdInputLine()  
    {  
        char str[10000]; // declare the size of string      
        cin.getline(str, 10000); // use getline() function to read a string from input stream  
        
        char *ptr; // declare a ptr pointer  
        vector<string> argsVector;

        ptr = strtok(str, " "); // use strtok() function to separate string using comma (,) delimiter.  

        // use while loop to check ptr is not null  
        while (ptr != NULL)  
        {  
            //cout << ptr  << endl; // print the string token  
            argsVector.push_back(ptr);
            ptr = strtok (NULL, " , ");  
        }  
        return argsVector;  
    }  

    int main()
    {
        string gameName, inputStr, dirStr;
        vector<string> inputArr;
        vector<string> arrowArr;
        vector<string> finalArr;
        int amt;

       inputArr = readUserStdInputLine();
        while(inputArr[0] != "End")
        {
            if(inputArr[0] == "FlightSimple")
            {
                amt = stoi(inputArr[1]);
                gameName="FlightSimple";
                //cin>>dirStr;
                
                //getline(cin,dirStr);
                
                arrowArr= readUserStdInputLine();

                //arrowArr=split(dirStr);
                Game gameObj;

                Console consoleObj;
                finalArr.push_back(consoleObj.startConsole(gameObj, gameName, arrowArr, amt));
                //finalArr.add(gameObj.process());
            }

            else
            {
                gameName="RandomWalk";
                arrowArr= readUserStdInputLine();
                amt=0;
                Game gameObj;

                Console consoleObj; //dont do this. create a normal game obj here and in the next statement whee we start console, pass game obj and gamename and check in startgame method and send ti req game
                finalArr.push_back(consoleObj.startConsole(gameObj, gameName, arrowArr, amt));

                
            }
            inputArr = readUserStdInputLine();
        }
        for(long unsigned int k=0;k<finalArr.size();k++)
        {
            cout<<finalArr[k]<<"\n";
        }   

        
    }
