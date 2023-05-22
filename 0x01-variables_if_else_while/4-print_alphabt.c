#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k == 'e' || k == 'q')
		{
			continue;
		}
		putchar(k);
	}
	putchar('\n');
	return (0);
}
