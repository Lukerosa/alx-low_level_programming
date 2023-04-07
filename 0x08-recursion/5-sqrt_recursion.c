#include "main.h"

/**
 * _sqrt - this is the entry point
 * Details: square root
 * @n: Integer
 * @x: Integer
 * Return: -1 if negative n, n if 0 or 1, square root otherwise
 */

int _sqrt(int n, int x)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((x * x) == n)
	{
		return (x);
	}
	if (x == n / 2)
	{
		return (-1);
	}
	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - this is the entry point
 * Details: square root
 * @n: Integer
 * Return: Square root of n or -1 if negative
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt(n, 1));
}
