#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0; // Asignin value to i //
	// go through each string in argv
	// why am I skipping argv[0]?
	for(i = 1; i < argc; i++) // Starting a loop //
	{
		printf("arg %d: %s\n", i, argv[i]);
	}
	// let's make our own array of strings
	char *states[] = { "California", "Oregon", "Washington", "Texas"};
	int num_states = 4; // Asigning value //
   	for(i = 0; i < num_states; i++) // Starting another loop //
	{
	printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}

/* Extra Credit
Figure out what kind of code you can put into the parts of a for-loop.
In the first part before the semicolon you declare anything you want, the second part you put a conditional and
in the last part what you want to happen after each loop

Look up how to use the ',' (comma) character to separate multiple statements in the parts of the for-loop,
but between the ';' (semicolon) characters.
Commas for separate arguments and semicolon to separate sequential instructions.

Read what a NULL is and try to use it in one of the elements of the states array to see what it'll print.
Just prints null, is like print the other states.

See if you can assign an element from the states array to the argv array before printing both. Try the inverse.
Says that is not declared my elements
*/
