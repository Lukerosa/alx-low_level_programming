#include "main.h"

/**
 * _pow_recursion - this is the entry point
 * Details: Returns the value of x to the power y
 * @x: Integer
 * @y: Integer
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
