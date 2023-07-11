#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file
 * @filename: fie pointer
 * @letters: number of letters
 * Return: number of letters, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ch;
	ssize_t nRD, nWR;
	char *buf;

	if (filename == NULL)
		return (0);

	ch = open(filename, O_RDONLY);

	if (ch == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	nRD = read(ch, buf, letters);
	nWR = write(STDOUT_FILENO, buf, nRD);

	close(ch);

	free(buf);

	return (nWR);
}

