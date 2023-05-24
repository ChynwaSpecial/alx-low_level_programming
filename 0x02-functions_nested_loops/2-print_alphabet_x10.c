#include "main.h"
/**
 * main - Entry point
 * Description: Print alphabet 10 times
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int m;
	char n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
	}
	_putchar('\n');

}
