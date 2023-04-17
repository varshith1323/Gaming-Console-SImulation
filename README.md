# Gaming-Console-SImulation

[This project has been implemented in both Java and CPP separately]

This software simulates the working of a gaming console which allows you to plug in various games and play any of them using a standard
interface which has a set of buttons or similar input mechanisms. 

Consider a Console that has a Start button and 4 arrow keys - up, down, left, right. The player 
chooses a game to play, adds it to the Console, presses Start, and then does a series of actions
by pressing one of the 4 arrow keys. The console sends these commands to the chosen Game
by invoking an appropriate method of the Game. The game object processes these commands
and makes the appropriate changes to its state. In the process, it checks if the player has
won/lost after each move, or if the game is over.

Note that the Console does not know anything about the specific game being played - for it, all
are variations of Game, and it knows that all of them support a standard set of methods. Games
are identified by their name - assume that the names are unique.

The Game object supports the following behaviours:
1. Start the game
2. Process an action - takes an argument that specifies which of the 4 arrow keys are
pressed - a character which is one of ‘L’, ‘R’, ‘U’, ‘D’ representing left, right, up, down key
presses. This method returns a String which is one of “Won”, Lost”, “Game Over” or
“None”
3. Keeping track of the number of keystrokes/commands. Games may have a limit on the
number of keystrokes allowed per session

In a second iteration of the design, the manufacturer decides to make some of the games as
“paid”, but does not want to change the design of Game, since there will still be free games. So,
instead, they design an add-on property called “chargeable”. We can model this with a Java
interface Chargeable which contains a single method:
1. Recharge: takes an integer as an argument which is the amount of money added to the
Chargeable object.
(Note that types other than Games can enhance their functionality by adding the “chargeable”
capability.)

We have 2 games implemented, called “FlightSimple” and “RandomWalk”. (Note: these are toy
games and not to be analyzed for their content)

FlightSimple is a simple flight simulator, but a paid game. The objective is to fly a plane and land
it back safely. It interprets the 4 keys as follows:

R: increase speed by 1 unit
L: reduce speed by 1 unit. Speed cannot go below 0. Reducing the speed to 0 when you
are flying causes the plane to crash and you have lost the game.
U: increase altitude by 1 unit. Altitude can be increased from 0 only if speed is greater
than 2 units. Otherwise this command is ignored.
D: reduce height by 1 unit. Reducing below 0 results in a crash and you have lost the
game

Getting the height to 0 and then the speed to 0 means you have landed successfully and
have won the game.

Before starting FlightSimulator, you have to recharge it - you get as many keystrokes/commands
as the recharge amount.

RandomWalk is a simple game where the user is on a 20x20 grid (of tiles), and
starts at position 10,10 (rows and columns of tiles are numbered 0 to 19 in each direction, with
0,0 as the bottom left corner). Each key press moves the player by 1 unit in the appropriate
direction - left, right, up or down. If you hit the upper limit (i.e. go past 19) moving to the top or to
the right, then you have lost the game. If you touch the bottom limit (row 0), you have won the
game. Hitting the left limit is not an issue, though you cannot go further left.

To play any of these games, the user informs the console about the choice of game. If it is a
paid game, the user first recharges the game. Then the user starts the game, and presses one
of the 4 keys in any order. The console reports the status when the player either wins or loses
the game, or the game is over (either as reported by the game, or when there is no more input),
and then moves on to the next game if one exists

Functionality of the classes:
1. GameConsole which reads the user input for each session of the game, and invokes
appropriate methods on the Games
2. Game: that exposes the methods to start and process a key, and returns one of the
results mentioned above.
3. Chargeable: interface that makes a Game (or other classes) rechargeable
4. Classes to implement RandomWalk and FlightSimple, which provide the specific
methods to handle keystrokes. And in the case of FlightSimple, adding in the
Chargeable functionality
5. A driver/main class that sets up the Console, reads the input and instantiates the
relevant Game object. In the case of a paid game (the main knows which games are
paid or free), recharges the game with the amount specified in the input. Adds the game
to the console and starts the console (which, in turn, starts the game and reads the input
line).

The Console class does not know about specific types of games, but only
thinks of them all as games. It uses the name of the game to identify the game to be
invoked. We will also be able to add new kinds of games
(whether free or paid) to a console, and the only code that would change is the
main/driver class, and, of course, the implementation of the new game.

The user actions are specified through the input as defined below - pairs of lines of input.
The first line specifies the name of the game. In the case of paid games, the next integer is the
amount of recharge. This is followed in the next line by a series of characters, one of L, R, U, D.
An End as the name of the game implies end of play

Sample Input:
FlightSimple 12
R R R U U R D L D D L R
RandomWalk
R R R U U R D L D D R
RandomWalk
R R R U U R D L D U R R U U U U U U U U
FlightSimple 20
R R U R U R R U D D L D L L L L L L L L
End
Output
FlightSimple: Lost
RandomWalk: Game Over
RandomWalk: Lost
FlightSimple: Won
