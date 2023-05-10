#include "main.h"

/**
 * sqrt2 - Helper function to evaluate square root from 1 to n
 * @a: The number to calculate the square root of
 * @b: The number that iterates from 1 to n
 *
 * Return: The square root of 'a' if found, otherwise -1
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);

	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - Calculates the square root of a number recursively
 * @n: The number to calculate the square root of
 *
 * Return: The square root of 'n' if found, otherwise -1
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
