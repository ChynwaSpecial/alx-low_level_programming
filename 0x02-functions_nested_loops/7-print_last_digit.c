#include "main.h"
/**
 * print_last_digit - Prints the digit of a number
 * @m: The number
 * Return: Value of the last digit
 */
int print_last_digit(int m)
{
	int k = m % 10;

	if (k < 0)
	{
		_putchar(-k + '0');
		return (-k);
	}
	else
	{
		_putchar(k + '0');
		return (k);
	}
}
