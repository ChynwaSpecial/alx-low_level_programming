#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints element of each array
 * @array: array of the function
 * @size: size of the array
 * @action: pointer to the function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
