#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * Description: Prints the sums of the diagonals of a square matrix
 * @a: Integer pointer to the square matrix
 * @size: Integer size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;
	int *ptr1 = a;
	int *ptr2 = a + size - 1;

	/* Calculate the sum of the diagonal from top-left to bottom-right */
	for (i = 0; i < size; i++)
	{
		sum1 += *ptr1;
		ptr1 += (size + 1);
	}

	/* Calculate the sum of the diagonal from top-right to bottom-left */
	for (i = 0; i < size; i++)
	{
		sum2 += *ptr2;
		ptr2 += (size - 1);
	}

	printf("%d, %d\n", sum1, sum2);
}
