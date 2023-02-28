#include <stdio.h>
#include "main.h"

/**
* print_rev - print a string in reverse
* @s: string to print
* Return: 0
*/
void print_rev(char *s)
{
int length, counter;
length = 0;
while (s[length] != '\0')
length++;
for (counter = length - 1 ; counter >= 0; counter--)
{
putchar(s[counter]);
}
putchar('\n');
}
