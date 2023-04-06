#include "main.h"

/**
 * _print_rev_recursion - this is the entry point
 * Details: Prints a string in reverse
 * @s: - Character
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
