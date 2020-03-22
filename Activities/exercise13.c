#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2) // Argc different to 2 //
	{
		printf("ERROR: You need one argument.\n");
		// this is how you abort a program //
		return 1;
	}
	int i = 0; // Declaring variables //
	for(i = 0; argv[1][i] != '\0'; i++) // Putting a loop //
	{
		char letter = argv[1][i]; // Asigning value to char letter //
		switch(letter)
		{
			case 'a':
			case 'A':
			printf("%d: 'A'\n", i);
			break;
			case 'e':
			case 'E':
			printf("%d: 'E'\n", i);
			break;
			case 'i':
			case 'I':
			printf("%d: 'I'\n", i);
			break;
		 	case 'o':
			case 'O':
			printf("%d: 'O'\n", i);
			break;
	 		case 'u':
			case 'U':
			printf("%d: 'U'\n", i);
			break;
			case 'y':
			case 'Y':
			if(i > 2)
			{
				// it's only sometimes Y //
				printf("%d: 'Y'\n", i);
			}
			break;
 			default:
			printf("%d: %c is not a vowel\n", i, letter);
		}
	}

    return 0;
}

/* Extra Credit
Write another program that uses math on the letter to convert it to lowercase, and then remove
all the extraneous uppercase letters in the switch.
-

Use the ',' (comma) to initialize letter in the for-loop.
- It prints a lot of things
816: : is not a vowel
817: * is not a vowel
818: . is not a vowel
819: p is not a vowel
820: g is not a vowel
821: m is not a vowel
822: = is not a vowel
823: 0 is not a vowel
824: 1 is not a vowel
825: ; is not a vowel
826: 3 is not a vowel
827: 5 is not a vowel
828: : is not a vowel
829: * is not a vowel
830: . is not a vowel
831: p is not a vowel
832: p is not a vowel
833: m is not a vowel
^Z834: = is not a vowel

[7]+  Stopped                 ./a.out i

Make it handle all of the arguments you pass it with yet another for-loop.
-

Convert this switch-statement to an if-statement . Which do you like better?
-if((letter == 'a')||(letter == 'A')){
	printf("%d: 'A' \n", i);}
	elseif((letter == 'e')||(letter == 'E')){
		printf("%d: 'E' \n", i);}
	elseif((letter == 'i')||(letter == 'I')){
		printf("%d: 'I' \n", i);}
	elseif((letter == 'o')||(letter == 'O')){
		printf("%d: 'O' \n", i);}
	elseif((letter == 'u')||(letter == 'U')){
		printf("%d: 'U' \n", i);}
	elseif((letter == 'y')||(letter == 'Y')){
		printf("%d: 'Y' \n", i);}
	else
		printf("is not a vowel");

In the case for 'Y' I have the break outside the if-statement . What's the impact of this and what
happens if you move it inside the if-statement . Prove to yourself that you're right.
- Prints the Y and I don't understand why before put it inside the if statement it wasn't printing
I guess is for the break.

*/
