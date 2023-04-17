import java.util.*;
import java.io.*;
public class Console
{
    private Game m_game;

    public String startConsole(Game gameObj, String gameName, String[] arrowArr, int amt)
    {
        m_game=gameObj;
        return(m_game.startGame(gameName, arrowArr, amt));
    }
}