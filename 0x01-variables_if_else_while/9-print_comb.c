#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints single-digit numbers
 * Result: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)

	{
	putchar(n);
	if (n == 57)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
