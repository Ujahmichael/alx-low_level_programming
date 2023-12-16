#include <stdio.h>
#include "main.h"

/**
 * print_binary - converts an integer to its  binary
 * @n: integer value
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	char binary[64];
	int i = 0, j;

	if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		binary[i++] = (n & 1) ? '1' : '0';
		n >>= 1;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j]);
	}
}
