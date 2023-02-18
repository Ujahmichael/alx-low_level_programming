#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - To know the value of n
 *
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is a positive: %d\n", n);
	}
	if (n < 0)
	{
		printf("is a negative: %d\n", n);
	}
	if (n == 0)
	{
		printf("is equal to zero: %d\n", n);
	}
	return (0);
}
