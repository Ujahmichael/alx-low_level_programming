#include "main.h"

/**
 * _strcat - concatenate 2 string
 * @dest:character one
 * @src:character two
 * Return:character
 */
char *_strcat(char *dest, char *src)
{
	char *index = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (index);
}
