#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory to be filled
 * @b: The value to be set in each byte
 * @n: Number of bytes to be filled
 * Return: Pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}
