#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string
 * @c: Character to be located
 *
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s); /* return the pointer to the character if found */
		}
		s++;
	}
	if (c == '\0')
	{
		return (s); /* return the pointer to the null terminator if c is null */
	}
	return (NULL); /* return NULL if character is not found */
}
