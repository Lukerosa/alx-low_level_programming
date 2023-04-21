#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_all - function that prints anything.
 *
 * @format: a list of types of arguments passed to the function.
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list pars;
	int p = 0;
	char *s;

	va_start(pars, format);

	while (format && format[p])
	{
		switch (format[p])
		{
			case 'c':
				printf("%c", va_arg(pars, int));
				break;
			case 'i':
				printf("%d", va_arg(pars, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(pars, double));
				break;
			case 's':
				s = va_arg(pars, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				p++;
				continue;
		}
		if (format[p + 1])
			printf(", ");
		p++;
	}
	printf("\n");
	va_end(pars);
}
