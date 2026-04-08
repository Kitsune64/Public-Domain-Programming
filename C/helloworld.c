/* helloworld.c - Hello World in C programming Langage.
 Written in 2026 by Kitsune64.

To the extent possible under law, the author(s) have dedicated all copyright
and related and neighboring rights to this software to the public domain
worldwide. This software is distributed without any warranty.

You should have received a copy of the CC0 Public Domain Dedication along with
this software. If not, see <https://creativecommons.org/publicdomain/zero/1.0/>.

Compile with GCC: gcc helloworld.c -o helloworld */

#include <stdio.h> /* Include of the file "stdio.h" (Standard Input/Output).
This is a standard library in C used to handled input and output operations.
"stdio.h" contain the prototype of the "printf" function used in this code. */

/* Declaration of the function "main". This is by convention in C, the entry point of the program.
The "int" (integer number) noted the type of return waiting by the system at the end of the main function.
"void" cause here the function main here doesn't need any argument in this case. */
int main(void) {

	/* Calling the "printf" function that outputs a string passing as an argument on the screen. 
	Here we are passing the string "Hello, World!" as an argument that will be output on the screen. 
	The '\n' character tells the "printf" function to print a new line on the screen.
	Here the new line will be in the end of the string. */
   	printf("Hello, World!\n");
   	
   	/* "return 0" is the final step of the program, this line returns the integer number 0 to the system.
   	That noted the program ran and closed correctly. */
   	return 0;
}
