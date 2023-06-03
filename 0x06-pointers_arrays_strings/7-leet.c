#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: value of s
 */

char *leet(char *s)
{
	int m = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + m) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + m) == low_letters[i] || *(s + m) == upp_letters[i])
			{
				*(s + m) = numbers[i];
				break;
			}
		}
	m++;
	}

	return (s);
}


