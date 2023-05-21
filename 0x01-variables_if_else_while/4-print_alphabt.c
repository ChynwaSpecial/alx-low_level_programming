#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char k;

	k = 'a';

	while (k <= 'z')
	{

	if (k == 'q' || k == 'e')
			{
			k++;
			continue;
			}
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
