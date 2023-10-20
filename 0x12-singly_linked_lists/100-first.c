#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * firat - Function to execute a sentence
 */
void firat(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
