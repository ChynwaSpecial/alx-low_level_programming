#include "main.h"
/**
 * print_rev - Prints a string in reverse order
 * @s: Input string
 * Return: void
 */
void print_rev(char *s)
{
	int p = 0;
	int o;

	while (*s != '\0')
	{
		p++;
		s++;
	}
	for (o = p; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
