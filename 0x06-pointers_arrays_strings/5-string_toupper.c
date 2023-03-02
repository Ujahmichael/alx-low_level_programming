#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *j)
{

	int i;

i = 0;
	while (*(j + i))
	{
		if (*(j + i) >= 'a' && *(j + i) <= 'z')
			*(j + i) -= 'a' - 'A';
		i++;
	}
	return (j);
}
