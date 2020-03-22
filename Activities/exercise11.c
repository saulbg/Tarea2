#include <stdio.h>

int main(int argc, char *argv[]) // Our function with parameters //
{
 // go through each string in argv //
	int i=0; //Declaring variables//
	while( i <argc)
{
        printf("arg %d: %s \n", i, argv[i]);
        }
        // let's make our own array of strings //
        char * states[] = {
        "California", "Oregon", "Washington", "Texas"
        };
        int num_states= 4; // Declaring more variables //
        i=0; // watch for this //
         while(i < num_states) //Starting our loop//
        {
        printf("state %d: %s\n", i, states[i]);
        i--;
        }
        return 0;
}

/* Extra Credit
Make these loops count backward by using i-- to start at argc and count down to 0. You may have to
do some math to make the array indexes work right.
-

Use a while loop to copy the values from argv into states . Make this copy loop never fail such that if
there's too many argv elements it won't put them all into states .
-

Research if you've really copied these strings. The answer may surprise and confuse you though.
-

*/
