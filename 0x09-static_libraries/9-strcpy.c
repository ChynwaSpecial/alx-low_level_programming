#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;
	int c = 0;

	while (*(src + b) != '\0')
	{
		b++;
	}
	for ( ; c < b ; c++)
	{
		dest[c] = src[c];
	}
	dest[b] = '\0';
	return (dest);
}
