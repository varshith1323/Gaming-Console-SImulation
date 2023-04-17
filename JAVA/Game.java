import java.util.*;
import java.io.*;
class Game
{
    public String startGame(String gameName, String[] arrowArr, int amt)
    {
        //create objects of both games as required instead of doing what we did in main
        if(gameName.equals("RandomWalk"))
        {
            RandomWalk rwObj=new RandomWalk(arrowArr);
            return(rwObj.process());
        }

        if(gameName.equals("FlightSimple"))
        {
            FlightSimple fsObj=new FlightSimple(arrowArr);
            fsObj.recharge(amt);
            return(fsObj.process());
        }
        return null;
    }

    //public String process()
    //{
      //  return null;
    //} //pure virtual function

    public int tracker(int amt)
    {
        return(amt);
    }
}