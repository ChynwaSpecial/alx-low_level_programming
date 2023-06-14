#include "main.h"
/**
 * _puts - Program that prints string to stdout
 * @str: the sting to be outputed
 * _putchar  a new line
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

		_putchar('\n');
}
