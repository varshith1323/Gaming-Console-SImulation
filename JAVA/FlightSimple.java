import java.util.*;
import java.io.*;
class FlightSimple extends Game implements Chargeable
{
    private String dirArr[];
    int m_amount;
    FlightSimple(String[] arrowArr)
    {
        dirArr=arrowArr;
    }

    public void recharge(int amt) //set method
    {
        m_amount=amt;
    }

    //public int getRechargeAmt()
    //{
      //  return(m_amount);
    //}

    public String process()
    {
        int speed=0, height=0;
        if(m_amount<dirArr.length)
        {
            return("FlightSimple: Game Over");
        }
        for(int j=0;j<tracker(m_amount);j++) //this for loop keeps track of the number of commands
        {
            if(dirArr[j].equals("R"))
            {
                speed+=1;                
            }

            if(dirArr[j].equals("L"))
            {
                if(speed>0)
                {
                    speed-=1; 
                }
            }

            if(dirArr[j].equals("U"))
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

            if(dirArr[j].equals("D"))
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
}