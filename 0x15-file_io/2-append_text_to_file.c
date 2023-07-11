#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: content added to file
 * Return: 1 if the file exists, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ch;
	int alpha;
	int nWR;

	if (filename == NULL)
		return (-1);

	ch = open(filename, O_WRONLY | O_APPEND);

	if (ch == -1)
		return (-1);

	if (text_content)
	{
		for (alpha = 0; text_content[alpha]; alpha++)
			;

		nWR = write(ch, text_content, alpha);

		if (nWR == -1)
			return (-1);
	}

	close(ch);

	return (1);
}
