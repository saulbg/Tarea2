#include <stdio.h> 
#include <ctype.h>

// forward declarations //
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[]
{
	int i = 0
	for(i = 0; i < argc; i++) 
	{        
		print_letters(argv[i]);    
	} 
}

void print_letters(char arg[])
{
	int i = 0;
	for(i = 0; arg[i] != '\0'; i++) 
	{
		char ch = arg[i];
		if(can_print_it(ch))
		{
			printf("'%c' == %d ", ch, ch);
		}
	}
	printf("\n");
}

int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}

/* Extra Credit
Rework these functions so that you have fewer functions. For example, do you really need can_print_it ?
-
Have print_arguments figure how long each argument string is using the strlen function, and then pass that length to print_letters . Then, rewrite print_letters so it only processes this fixed length and d
oesn't rely on the '\0' terminator. You will need the #include <string.h> for this.
-

Use man to lookup information on isalpha and isblank . Use the other similar functions to print out
only digits or other characters.
-

Go read about how different people like to format their functions. Never use the "K&R syntax" as it's antiquated and confusing,
but understand what it's doing in case you run into someone who likes it.
-

*/
