#include "main.h"

/**
 * get_bit - print bit value
 * @n: number in binary
 * @index: bit index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}

	return (-1);
}
