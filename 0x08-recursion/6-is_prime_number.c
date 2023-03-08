#include "main.h"

/**
 * is_prime_helper - checks for prime numbers recursively
 * @n: The integer to be checked
 * @i: The other int to be checked
 *
 * Return: Returns the function
 */

int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % 1 == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - Checks for prime number
 * @n: the integer to be checked
 *
 * Return: 1 for prime numbers 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
}

