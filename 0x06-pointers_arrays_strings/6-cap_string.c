#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @n: input string.
 * Return: n
 */

char *cap_string(char *n)
{
	int m = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(n + m) >= 97 && *(n + m) <= 122)
		*(n + m) = *(n + m) - 32;
	m++;
	while (*(n + m) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(n + m) == sep_words[i])
			{
				if ((*(n + (m + 1)) >= 97) && (*(n + (m + 1)) <= 122))
					*(n + (m + 1)) = *(n + (m + 1)) - 32;
				break;
			}
		}
		m++;
	}
	return (n);
}


