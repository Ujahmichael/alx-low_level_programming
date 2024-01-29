#include "lists.h"
void first() __attribute__ ((constructor));
/**
 * first - print a sentence before mian execute
 */
void first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
