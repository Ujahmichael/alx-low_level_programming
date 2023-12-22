#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to be  read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lr, lw, fil;
	char *buffer;
	fil = open(filename, O_RDONLY);
	if (fil == -1)
		return (0);
	buffer= malloc(sizeof(char) * letters);

	lr = read(fil, buffer, letters);

	lw = write(STDOUT_FILENO, buffer, lr);
	free(buffer);
	close(fil);
	return (lw);
}
