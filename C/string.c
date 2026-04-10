/* string.c - Usage of string and array of char in C programming language.
 Written in 2026 by Kitsune64.

To the extent possible under law, the author(s) have dedicated all copyright
and related and neighboring rights to this software to the public domain
worldwide. This software is distributed without any warranty.

You should have received a copy of the CC0 Public Domain Dedication along with
this software. If not, see <https://creativecommons.org/publicdomain/zero/1.0/>. 

Compile with GCC: gcc string.c -o string */

#include <stdio.h> /* Include of "stdio.h" (Standard Input/Output C Library) that is used for calling "printf" function. */

/* The "main()" function, which serves as the entry point of the program. */
int main(void){

	/* Create an array of 5 "char" (maximum five characters).
	The array of char is initialised from name_1[0] to name_1[3] here with 'A', 'l', 'e', 'x' characters (Alex).
	Notice the ending character name_1[4] with '\0' for memory security that indicates the end of the sized array. */
	char name_1[5]={'A','l','e','x','\0'};
	
	/* An other way to create a Array of "char" without definite manually the size of the array here.*/
	char *name_2 = "Jessica";
	
	/* Using "printf()" function to show the 2 arrays of "char" as strings with "%s". */
	printf("Name 1 is %s\nName 2 is %s\n", name_1, name_2);
	
	/* Return 0 to the system to indicate the program ran and exit well. */
	return 0;
}
