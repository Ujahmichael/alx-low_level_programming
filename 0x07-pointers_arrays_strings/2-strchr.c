#include "main.h"
#include <stdio.h>

/**
* _strchr - a function that locate a char in a string
* @s: string
* @c: char
* Return: pointer to char
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
