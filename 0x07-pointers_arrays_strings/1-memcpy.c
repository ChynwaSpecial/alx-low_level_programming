#include "main.h"
/**
 * _memcpy - function thtat copies memory area
 * @dest: destination
 * @src: Source
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[j];
		n--;
	}
	return (dest);
}


