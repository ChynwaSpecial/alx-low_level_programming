#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Program that searches for an integer
 * @array: array of the function
 * @size: number of element in the array
 * @cmp: flag for comparison
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
