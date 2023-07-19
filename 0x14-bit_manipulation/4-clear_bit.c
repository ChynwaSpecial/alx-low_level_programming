#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: unsigned long int pointer
 * @index: bit index
 * Return: 1 (successful), otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
