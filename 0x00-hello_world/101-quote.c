#include <stdio.h>
#include <unistd.h>
/**
 * main - print a word to its standard error
 *
 * Return: 1
*/
int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
while (*s)
putchar(*s++);
return (1);
}
