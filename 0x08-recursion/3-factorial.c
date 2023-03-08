#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: The integer to be checked
 *
 * Return: -1 if value is lower than zero
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
