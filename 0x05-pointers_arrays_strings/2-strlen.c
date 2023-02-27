#include "main.h"
/**
* _strlen - function that returns the lenght of a string
* @s: string to return
* Return: return the lenght of string
*/
int _strlen(char *s)
{
int counter = 0; /* start counting from 0 */
for (; *s++;)
counter++;
return (counter);
}
