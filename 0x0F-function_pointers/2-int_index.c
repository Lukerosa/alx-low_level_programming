#include "function_pointers.h"

/**
 * int_index - Entry point
 * Description: searches for integer in array using a comparison function
 * @array: pointer to array
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: -1 if no element matches If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int p, result;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}
	for (p = 0; p < size; p++)
	{
		result = cmp(array[p]);
		if (result != 0)
		{
			return (p);
		}
	}
	return (-1);
}
