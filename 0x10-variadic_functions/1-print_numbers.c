#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * Description: Prints numbers, then a newline
 * @separator: String to be printed between numbers
 * @n: number of integers passed onto the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pars;
	unsigned int p;

	va_start(pars, n);
	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(pars, int));

		if (separator != NULL && p != (n - 1))
		{
			printf("%s", separator);

		}
	}
	printf("\n");
	va_end(pars);
}
