import java.util.*;
import java.io.*;
class RandomWalk extends Game
{
    private String dirArr[];
    private int initx,inity,finalx,finaly;
    RandomWalk(String[]arrowArr)
    {
        dirArr=arrowArr;
    }

    public String process()
    {
        initx=10;
        inity=10;
        finalx=initx;
        finaly=inity;
        for(int i=0; i<dirArr.length;i++)
        {
            if(dirArr[i].equals("U"))
            {
                finaly=finaly+1;
               // System.out.println("\nfinaly="+finaly);
                
            }

            if(dirArr[i].equals("D"))
            {
                finaly=finaly-1;
               // System.out.println("\nfinaly="+finaly);
            }

            if(dirArr[i].equals("R"))
            {
                finalx=finalx+1;
                //System.out.println("\nfinalx="+finalx);
                
                //return "RandomWalk: None";
            }

            if(dirArr[i].equals("L"))
            {
                if(finalx>0)
                    finalx=finalx-1;
                  //  System.out.println("\nfinalx="+finalx);
                //System.out.println("\nfinalx="+finalx);

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
}