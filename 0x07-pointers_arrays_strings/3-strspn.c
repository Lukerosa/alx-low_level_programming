#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the substring
 * Return: Length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (len); // return length of prefix substring once end of accept string is reached
		}
	}
	return (len); // return length of prefix substring
}
