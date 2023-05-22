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
		if (k == 'q' || k == 'e')
		{
			k++;
			continue;
		}
		putchar(k);
	}
	putchar('\n');
	return (0);
}
