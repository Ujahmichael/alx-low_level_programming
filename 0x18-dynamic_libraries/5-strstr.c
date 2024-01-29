#include "main.h"
#include <stdio.h>

/**
* _strstr - locate a substr
* @haystack: string
* @needle: second string
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *j = needle;

while (*i == *j && *j != '\0')
{
i++;
j++;
}

if (*j == '\0')
return (haystack);
}
return (NULL);
}
