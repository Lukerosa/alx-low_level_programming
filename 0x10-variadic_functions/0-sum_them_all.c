#include <stdio.h>
#include "variadic_functions.h"


/**
 * sum_them_all - entry point
 * Description: returns the sum of all parameters
 * @n: the number of parameters to sum
 * Return: the sum of all the parameters, or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pars;
	int sum = 0;
	unsigned int p;

	if (n == 0)
	{
		return (0);
	}
	va_start(pars, n);
	for (p = 0; p < n; p++)
	{
		sum += va_arg(pars, int);
	}
	va_end(pars);
	return (sum);
}
