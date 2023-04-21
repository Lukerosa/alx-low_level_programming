#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a variable number of strings, separated by a given
 * string, then a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings to be printed
 * @...: variable number of arguments, each a string to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pars;
	unsigned int p;
	char *str;

	va_start(pars, n);
	for (p = 0; p < n; p++)
	{

		str = va_arg(pars, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && p != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(pars);
}
