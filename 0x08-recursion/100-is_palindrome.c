#include "main.h"
#include <string.h>
/**
 * _strlen - determine string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * compare - strings comparism
 * @s: string
 * @a: first iterator.
 * @b: second iterator.
 * Return: 0
 */
int compare(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + compare(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - determine whether string is a palindrome
 * @s: string
 * Return: 1 if palindrome otherwie 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen(s) - 1));
}
