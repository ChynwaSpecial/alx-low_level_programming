#include "main.h"
/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int m, d, ch;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	ch = 1;

	while (d > 9)
	{
		d /= 10;
		ch *= 10;
	}

	for (; ch >= 1; ch /= 10)
	{
		_putchar(((m / ch) % 10) + 48);
	}
}

