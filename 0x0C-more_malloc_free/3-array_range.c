#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: NULL, if min > max and NULL if malloc fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int k;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		arr[k] = min;

	return (arr);
}
