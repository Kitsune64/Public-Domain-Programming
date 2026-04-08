/* globalvariable.c - Using a global variable in the C programming language.
 Written in 2026 by Kitsune64.

To the extent possible under law, the author(s) have dedicated all copyright
and related and neighboring rights to this software to the public domain
worldwide. This software is distributed without any warranty.

You should have received a copy of the CC0 Public Domain Dedication along with
this software. If not, see <https://creativecommons.org/publicdomain/zero/1.0/>. 

Compile with GCC: gcc globalvariable.c -o globalvariable */

#include <stdio.h> /* Include of "stdio.h" (Standard Input/Output C Library) that is used for calling "printf" function. */

/* Create a "float" global variable directly after the #include and before the functions.
A global variable can be accessed by all functions of the program.
As it said, this is a float variable named pi, which contains an approximate value of pi. */
float pi = 3.14159;

/* "circleArea()" is a function that will calculate the circle area of a circle with a given radius. This function needs the pi number as well. */

void circleArea(void){

	/* Initialize a local "float" variable with the value of the radius of the circle */
	float radius = 1.5; 

	/* Initialize the "float" variable and calculate the area of the circle using pi and the radius previously initialized. */
	float area = pi*radius*radius; 

	/* Show with the "printf()" function the miscellaneous values of the "float" variables used to show the final result of the circle area. */
	printf("The area of a circle with %.1f cm of radius will be %.5f square cm.\n", radius, area);
}

/* The "main()" function is the entry point of the program. */
int main(void){

	/* Using the "printf()" function to show the value of the global "float" "pi" variable with a precision of 5 digits after the comma. */
	printf("If pi number is approximately equal to: %.5f\n", pi);

	/* Call of the function that calculates the circle area. */
	circleArea();

	/* End of the program by returning 0 to the system. So the program ran and exit well. */
	return 0;
}
