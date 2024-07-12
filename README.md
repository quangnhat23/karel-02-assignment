Write a program that accepts the following commands from the user:

move();
turnLeft();
quit
Note that both move(); and turnLeft(); have to be written precisely as defined, including the parentheses and semicolon. quit, likewise, has to be written precisely as defined: the word quit, with no parentheses or semicolon.

Your program should continue prompting the user for more input until they enter the quit command. Your prompt should look as follows -- you must follow this format exactly:

Please enter a command:

If the user enters anything but the commands above, print


Invalid command!

And then ask the user to enter another command.

Create variables to keep track of the row and column that Karel is standing at, and the direction Karel is facing. You may use whatever type makes sense to store these variables. Karel should start at location (0, 0) -- the top left of the board, which is different from where our Karel IDE starts -- and should initially be facing east. Each time the user enters a command, print Karel's location and the direction that Karel is currently facing. You must EXACTLY follow the format below:

Karel is at location (row, column) facing direction.
The size of Karel's world should be given as a pair of constants named ROWS and COLUMNS. Set ROWS equal to 6 and COLUMNS equal to 8.

If Karel should try to move outside of the bounds of this world, print a message that says that Karel has crashed and then exit the program. Follow this format EXACTLY:


Karel tried to move to location (row, column). Karel has crashed!
When the user enters the quit command, print out Karel's final location and direction faced, then thank the user for not crashing Karel. Follow this format EXACTLY:

Karel finished at location (row, column) facing direction. Thank you for not crashing Karel!

Karel version 0.2

Create a 15x15 two dimensional grid (using whatever data structure you prefer – arrays, vectors, whatever). Each square on the grid should be marked with a – character. Place a robot, marked with a O, on the bottom left square of this grid, facing right. Print the board, then provide a prompt for the user and ask for input. Your program must take the following input:
 

            move();

            turnLeft();

            putBeeper();

            pickBeeper();

            quit();

 

Each time you take valid input from the user, you should print the board.

 

move(); should move the robot one square in the direction they are facing. turnLeft(); should adjust   the robot’s facing accordingly.

putBeeper(); should put a beeper on the grid, marked with the letter X.  If Karel is standing on a beeper, use the character @ to represent the combination. If the user places a beeper on a square that already has a beeper, the display should be unchanged (you don’t have to worry about multiple beepers on one square for this version -- if the user asks to put a beeper on a square that Karel is already on, leave the board state unchanged).

If the user enters pickBeeper(); when the robot is on a beeper, remove the beeper from, that square. If the user enters pickBeeper(); when there is no beeper, the program should quit after displaying a message saying the robot has crashed.

 

Likewise, if the robot move();s into a wall, the program should quit after displaying a crash message.

 

If the user enters quit,  your program should quit.

If the user enters any other string, print “syntax error” and re-display the prompt.

Note: You MUST have your user format input EXACTLY as given in this question. move(); is a valid move, but move or move() is a syntax error.
