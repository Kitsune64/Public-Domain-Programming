/* variable.c - Using variables and showing it on screen in C programming language.
 Written in 2026 by Kitsune64.

To the extent possible under law, the author(s) have dedicated all copyright
and related and neighboring rights to this software to the public domain
worldwide. This software is distributed without any warranty.

You should have received a copy of the CC0 Public Domain Dedication along with
this software. If not, see <https://creativecommons.org/publicdomain/zero/1.0/>. 

Compile with GCC: gcc variable.c -o variable */

#include <stdio.h> /* Include of "stdio.h" (Standard Input/Output C Library) that is used for calling "printf" function. */

/* The "main()" function, which serves as the entry point of the program. */
int main(void){
	
	/* Create a "int" variable name 'n' that can store a integer number like 98 as example. */
	int n=98;
	
	/* Create a "char" variable name 'c' that can store a single character like 'a' as example. */
	char c='a';
	
	/* Here we use the "printf" function with this cheaty trick '%d' and 'n' at end of the string,
	after the comma to show the integer value of the variable n. */
	printf("The value of the variable n is: %d \n", n);
	
	/* Using "printf" function for showing a single character with the '%c' trick. */
	printf("The character stored in the variable c is: %c \n", c);
	
	/* Using "printf" function with %c (show me a single character stored in variable) %d (show me an integer variable) for showing the ASCII code
	 of the value of character stored in 'c' here. So, it show the ASCII code of letter 'a' as example. */
	printf("The ASCII code of the character '%c' is: %d \n", c, c);
	
	/* Using "printf" function to showing the ASCII character with %c that corespond to the int value stored in the variable n. */
	printf("The ASCII letter of the code %d is: '%c' \n", n, n);
	
	/* Return 0 to the system to indicate the program ran and exit well. */
	return 0;
}
