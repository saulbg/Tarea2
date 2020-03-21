#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[0] = {10,12,13,14,20}; // Size of the array //
	char name[] = "Zed"; // Name //
	char full_name[] = {
	'Z', 'e', 'd', ' ', ',', 'A', '.',' ', 'S', 'h', 'a', 'w', '\0'
	};

	/* WARNING: On some systems you may have to change the %ld in this code to a %u
	since it will use unsigned ints */
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
 	printf("The number of ints in areas: %ld\n", sizeof(areas)/sizeof(int));
	printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);
	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(name));
	printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
	printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
	printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

return 0;
}

/* Extra Credit
Try assigning to elements in the areas array with areas[0] = 100; and similar.
int areas [0]=100
-warning: excess elements in array initializer
int areas [1]= 10
int areas [2]= 12

Try assigning to elements of name and full_name.
- char name[] = "El Bicho"; // Name //
'E', 'l', ' ', 'b', 'i', 'c', 'h','o', '\0'
        };
The size of an int: 4
The size of areas (int[]): 20
The number of ints in areas: 5
The first area is 10, the 2nd 12.
The size of a char: 1
The size of name (char[]): 9
The number of chars: 9
The size of full_name (char[]): 9
The number of chars: 9
name="El Bicho" and full_name="El bicho"

Try setting one element of areas to a character from name.
-vint areas[1] = {10,12,13,14,20};

Go search online for the different sizes used for integers on different CPUs.}
- 6-, 8-, 12-, 16-, 18-, 24-, 32-, 36-, 39-, 40-, 48-, 60-, and 64-bit.
*/

