#include "main.h"

/** 
 * _pow_recursion - Function that returns the value of x raised to the power of y
 * @x: integer to be printed
 * @y: power to be raised to 
 *
 * Return: The result of the equation. Returns -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1 / _pow_recursion(x, -y));
	}
}
