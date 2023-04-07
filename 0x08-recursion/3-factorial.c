#include "main.h"

/**
 * factorial - this is the entry point
 * Details: code returns the factor of a number
 * @n: Integer
 * Return: int
 */
 
int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
