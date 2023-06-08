#include "main.h"
/**
 * check - checks for the square root
 * @i:int
 * @j:int
 * Return: int
 */
int check(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i * i > j)
		return (-1);
	else
		return (check(i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (check(1, n));
}
