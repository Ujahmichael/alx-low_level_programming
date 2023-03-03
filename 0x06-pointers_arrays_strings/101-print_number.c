#include "main.h"

/**
* print_number - Prints any integer with putchar
* @n: Number to prints
* Return: 0
*/
void print_number(int n)
{
unsigned int i;

if (n < 0)
{
_putchar('-');
n = n * -1;
}

i = n;

if (i / 10)
print_number(i / 10);

_putchar(i % 10 + '0');
}
