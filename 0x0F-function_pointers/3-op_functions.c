#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return the difference between two numbers
 * @a: the first number
 * @b: the second number
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return the multiplication of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Return the modulus of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the modulus of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
