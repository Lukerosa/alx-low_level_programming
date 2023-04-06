#include "main.h"

/**
 * _puts_recursion is the entry point
 * details - prints a string then new line
 * @s - character
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
