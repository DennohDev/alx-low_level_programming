#include "main.h"

/**
 * _sqrt_recursion - Find the square root
 * @n: the integer to be checked
 *
 * Return: The square root helper function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}

/**
 * _sqrt_helper - works with _sqrt_recursion to get square root
 * @n: the main integer
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: The respective values
 */
int _sqrt_helper(int n, int min, int max)
{
	int guess;

	if (max < min)
	{
		return (min - 1);
	}

	guess = (min + max) / 2;

	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess < n)
	{
		return (_sqrt_helper(n, guess + 1, max));
	}
	else
	{
		return (_sqrt_helper(n, min, guess - 1));
	}
}

