#include "main.h"

/**
* _memcpy - copy memory area
* @dest: this is pointer to the dest array where the content is to be copied
* @src: this is pointer to the source of data to be copied
* @n: number of byte to be copied
* Return:  value of s pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

dest[i] = '\0';
return (dest);
}
