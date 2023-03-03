#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a  bytes of a buffer
 * @c: buffer to print
 * @byte: bytes of buffer to print
 * @line: line of buffer to print
 * Return: void
 */
void print_line(char *c, int byte, int line)
{
int i, j;

for (i = 0; i <= 9; i++)
{
if (i <= byte)
printf("%02x", c[line * 10 + i]);
else
printf("  ");
if (i % 2)
putchar(' ');
}
for (j = 0; j <= byte; j++)
{
if (c[line * 10 + j] > 31 && c[line * 10 + j] < 127)
putchar(c[line * 10 + j]);
else
putchar('.');
}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
