#include "main.h"

/**
 * flip_bits - return the number of bits to be flipped
 * @n: first number
 * @m: second number
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int numb = 0;
	unsigned long int new;
	unsigned long int current = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		new = current >> a;
		if (new & 1)
			numb++;
	}

	return (numb);
}
