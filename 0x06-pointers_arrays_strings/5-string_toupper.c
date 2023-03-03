#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @str:string
 * Return:char
 */
char *string_toupper(char *str)
{
int i = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 'a' + 'A';
}
return (str);
}
