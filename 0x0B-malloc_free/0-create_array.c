#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Entry point
 * Description: Creates an array of chars and initializes
 * @size: Unsigned int
 * @c: Character
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
    unsigned int i;
	char *length;

	length = malloc(size * sizeof(char));

	if (size == 0 || length == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		length[i] = c;
	}
	return (length);char* create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }
    char* arr = (char*) malloc(size * sizeof(char));
    if (arr == NULL) {
        return NULL;
    }
    for (unsigned int i = 0; i < size; ++i) {
        arr[i] = c;
    }
    return arr;
    }
}