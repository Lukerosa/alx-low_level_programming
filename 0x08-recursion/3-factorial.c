/**
 * factorial - this is the entry point
 * Details: code returns the factor of a number
 * @n: Integer
 * Return: int
 */
 
int factorial(int n)
{
    int result = 1;
    if (n < 0)  // negative number case
    {
        return -1;
    }
    for (int i = 1; i <= n; i++) // loop to calculate factorial
    {
        result *= i;
    }
    return result;
}
