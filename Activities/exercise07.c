#include <stdio.h>

int main(int argc, char** argv[]) // Our main function with parameters //
{
	int bugs= 100; // Asiggning values to variables //
	double bug_rate= 1.2; // Use double for a major quantity of numbers //
	printf("You have %d bugs at the imaginary rate of %f. \n", bugs, bug_rate);

	long universe_of_defects = 1L * 1024L * 1024L * 1024L; // Use long for a big number//
	printf("The entire universe has %ld bugs.\n", universe_of_defects);

	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n", part_of_universe);

	// this makes no sense, just a demo of something weird//
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	 printf("Which means you should care %d%%.\n", care_percentage);

	return 0;
}

/* Extra Credit
Make the number you assign to universe_of_defects various sizes until you get
a warning from the compiler
- Warning: integer overflow in expression [-Woverflow]
  long universe_of_defects = 1000000L * 102222244L * 102222244L * 11110244L; // Use long for a big number//

What do these really huge numbers actually print out?
- I thinks small parts because is a big quantity of numbers

Change long to unsigned long and try to find the number that makes that one too big
- Is the same value just without sign

Go search online to find out what unsigned does
-Always evaluate positive values

Try to explain to yourself (before I do in the next exercise) why you can multiply a
char and an int
- I thinks is because you convert characters into to integers or by default the system
detect char as int

*/
