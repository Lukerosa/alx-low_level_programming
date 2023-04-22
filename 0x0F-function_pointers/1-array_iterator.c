#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * Description: executes a function on each element of an array
 * @array: pointer to an array
 * @size: size of array
 * @action: pointer to function to execute on each element of array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t p;

	if (!array || !action)
	{
		return;
	}
	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
