#include <stdio.h>
/**
 * main - print name of this program
 * @argv: argument
 * @argc: argument count
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
