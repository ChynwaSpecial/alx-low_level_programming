#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - creates a 2 dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int k, l;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		arr[k] = (int *) malloc(sizeof(int) * width);
		if (arr[k] == NULL)
		{
			free(arr);
			for (l = 0; l <= k; l++)
				free(arr[l]);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			arr[k][l] = 0;
		}
	}
	return (arr);
}

