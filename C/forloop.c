/* loopfor.c - Usage of "for" loop in C programming Language.
 Written in 2026 by Kitsune64.

To the extent possible under law, the author(s) have dedicated all copyright
and related and neighboring rights to this software to the public domain
worldwide. This software is distributed without any warranty.

You should have received a copy of the CC0 Public Domain Dedication along with
this software. If not, see <https://creativecommons.org/publicdomain/zero/1.0/>.

Compile with GCC: gcc loopfor.c -o loopfor */

#include <stdio.h>/* Include of the file "stdio.h" (Standard Input/Output) used here for printf(). */

/* The "main()" function, which serves as the entry point of the program. */
int main(void){
	int cpt=4; /* Initialization of an integer variable named "cpt" to 4 */
	
	/*Show the value of "cpt" on screen */
	printf("cpt variable is initialized here to %d at start of the program (before the 'for' loop).\n",cpt);
	
	/* Entering the "for" loop. It initializes "cpt" to 0, once before entering the loop.
	Condidition to continue the loop: "cpt" must be less than 10 otherwise, "cpt is incremented at the end of each loop. */
	for(cpt=0;cpt<10;cpt++){
		printf("cpt is now equal to %d.\n",cpt);
	}
	
	/* Out of the loop at the end, show a message before the program exits. */
	printf("End of the program.\n");
	
	/* Return 0 to the system to indicate the program ran and exited. */
	return 0;
}
