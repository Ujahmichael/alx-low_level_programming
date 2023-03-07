#include "main.h"

/**
* _strpbrk - search a string for any of a set of byte
* @s: string
* @accept: second string
*/
char *_strpbrk(char *s, char *accept)
{
int i, j, m, n;
i = 0;
m = 0;
n = 0;

while (*(s + i) != '\0')
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
{
m = 1;
n = i;
break;
}
}
if (m == 1)
{
break;
}
i++;
}
if (n == 0)
{
return ('\0');
}
else
{
return (s + n);
}
}
