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
	s--;
	for (o = p; 0 > 0; o--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
