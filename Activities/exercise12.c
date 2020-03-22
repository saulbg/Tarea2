#include <stdio.h>

int main(int argc, char *argv[])
{
	int i=0; //Declaring a variable //
	if (argc==1)
	{
		printf("You only have one argument. You suck. \n ");
	} else if (argc>1 && argc<4) // Putting a conditional //
			{
				printf("Here's your arguments: \n");
				for(i=0; i<argc; i++)
				{ //Initializing a loop //
				printf("%s", argv [i]);
				}
				printf("\n");
			} else {
					printf("You have too many arguments. You suck. \n");
				}
				return 0;
}

/* Extra Credits
You were briefly introduced to && , which does an "and" comparison, so go research online the
different "boolean operators".
- AND -> A && B
- OR -> A || B
- NOT -> !A

Write a few more test cases for this program to see what you can come up with.
A code equal to 10
else if (argc=4)
{
	printf("Ten, is your number")
}

Go back to Exercises 10 and 11, and use if-statements to make the loops exit early.
You'll need the break statement to do that. Go read about it.
- Just we have to put (argc-1 == 1). If we put it in that way we are making that the program
have a exit early because if we substract 1 from the argc, the 0 argc is the file so it doesn't
get into the loop.

Is the first test really saying the right thing? To you the "first argument" isn't the same
first argument a user entered. Fix it.
As I said before the argc 0 is the name of the file so, we are not printing the real argument
that the user put. We just have to put in our code
argc-1
*/
