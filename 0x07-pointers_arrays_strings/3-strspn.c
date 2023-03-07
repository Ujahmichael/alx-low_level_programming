#include "main.h"

/**
* _strspn - get the lenght orf a prifix substring
* @s: string
* @accept: second string
* Return: lenght of string
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, lenght;
lenght = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
lenght++;
break;

}
}
if (s[i] != accept[j])
{
return (lenght);
}
}
return (lenght);
}
