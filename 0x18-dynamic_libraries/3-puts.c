#include <stdio.h>
#include "main.h"

/**
* _puts - print a string
* @str: string to print
* Return: length of string
*/
void _puts(char *str)
{
int length = 0;

while (str[length] != '\0')
{
putchar(str[length]);
length++;
}
putchar('\n');
}
