#include <stdio.h>
/**
 * main - A program to print two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
