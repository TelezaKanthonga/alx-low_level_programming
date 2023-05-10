#include "main.h"

/**
 * prime2 - Determine if a number is prime recursively
 * @a: The number to be evaluated
 * @b: The number that iterates from 1 to n
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);

	return (prime2(a, b + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime2(n, 2));
}

