#include "main.h"

/**
 * _strpbrk - Entry point
 * Description: Searches a string for any of a set of bytes
 * @s: String to search
 * @accept: Set of bytes to search for
 * return: to return the null vale
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
