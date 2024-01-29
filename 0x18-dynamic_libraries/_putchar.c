#include <unistd.h>

/**
 * _putchar - print alphabet
 * @c: char
 * Return: alpha
 * written by ujah michael
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
