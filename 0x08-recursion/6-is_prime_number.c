#include <stdio.h>
#include "main.h"

int prime_check(int n, int a);

/**
  * is_prime_number - prints a prime number
  * @n: the integer number
  * Return: 1 if prime number otherwise 0
  */
int is_prime_number(int n)
{
	return (prime_check(n, 1));
}

/**
  * prime_check - prime number check
  * @n: the integer number
  * @a: number of iteration
  * Return: 1 if prime number otherwise 0
  */
int prime_check(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n % a == 0 && a > 1)
		return (0);
	if ((n / a) < a)
		return (1);
	return (prime_check(n, a + 1));
}
