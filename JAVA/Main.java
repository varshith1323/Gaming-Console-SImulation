import java.util.*;
import java.io.*;
public class Main
{
    public static void main(String[] args)
    {
        String gameName, inputStr, dirStr;
        String[] inputArr={};
        String[] arrowArr={};
        List<String> finalArr=new ArrayList<String>();
        int amt;
        Scanner sc=new Scanner(System.in);

        inputStr=sc.nextLine();
        while(!inputStr.equals("End"))
        {
            if(inputStr.length()>10)
            {
                inputArr=inputStr.split(" ");
                gameName="FlightSimple";
                amt=Integer.parseInt(inputArr[1]);
                dirStr=sc.nextLine();
                arrowArr=dirStr.split(" ");
                Game gameObj=new Game();

                Console consoleObj=new Console();
                finalArr.add(consoleObj.startConsole(gameObj, gameName, arrowArr, amt));
                //finalArr.add(gameObj.process());
            }

            else
            {
                gameName="RandomWalk";
                dirStr=sc.nextLine();
                arrowArr=dirStr.split(" ");
                amt=0;
                Game gameObj=new Game();

                Console consoleObj=new Console(); //dont do this. create a normal game obj here and in the next statement whee we start console, pass game obj and gamename and check in startgame method and send ti req game
                finalArr.add(consoleObj.startConsole(gameObj, gameName, arrowArr, amt));

                //finalArr.add(gameObj.process());
                
            }
            inputStr=sc.nextLine();
        }
        for(int k=0;k<finalArr.size();k++)
        {
            System.out.println(finalArr.get(k));
        }   

    }
}