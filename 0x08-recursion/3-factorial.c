#include "main.h"

/**
 * factorial - this is the entry point
 * Details: code returns the factor of a number
 * @n: Integer
 * Return: int
 */
 
int factorial(int n)
{
    int result = 1;
    int i;
    if (n < 0)
    {
        return -1;
    }
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
