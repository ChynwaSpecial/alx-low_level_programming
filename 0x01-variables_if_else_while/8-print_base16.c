#include <stdio.h>
/**
 * main - Entry point
 * Description: A program to print all the numbers of base 16 in lowercse
 * Return: 0 (Success)
 */

int main(void)
{
	int c;
	char m;

	for (c = 0; c < 10; c++)
	{
		putchar((c % 10) + '0');
	}

		for (m = 'a'; m <= 'f'; m++)
		{
			putchar(m);
	}
	putchar('\n');

	return (0);
}
