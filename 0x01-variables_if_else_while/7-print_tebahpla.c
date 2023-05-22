#include <stdio.h>
/**
 * main - Entry point
 * Description: A program to print the lowercase alphabet in reverse order
 * Return: 0 (Success)
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);
}
