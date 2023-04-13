#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Entry point
 * Description: Allocates memory using malloc
 * @b: Integer
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		exit(98);
		}
		return ptr;
		}