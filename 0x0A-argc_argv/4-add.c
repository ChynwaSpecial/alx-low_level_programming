#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array that contains the arguments
 * Return: 0 (Success)
 */
int main(int arg, char *argv[])
{
	int a, b, add = 0;

	for (a = 1; a < argv[a][b]; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
