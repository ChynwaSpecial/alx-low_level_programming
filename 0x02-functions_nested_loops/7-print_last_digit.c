#include "main.h"
/**
 * print_last_digit - Prints the digit of a number
 * @m: The number
 * Return: Value of the last digit
 */
int print_last_digit(int m)
{
	int ch = m % 10;

	if (ch < 0)
		ch *= -1;
	_putchar(ch + '0');

	return (0);
}
