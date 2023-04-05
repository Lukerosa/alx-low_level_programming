/**
 * _memcpy - Copies memory area
 * @dest: Pointer to destination memory
 * @src: Pointer to source memory
 * @n: Number of bytes to copy
 * Return: Pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ans = dest; /* Store the initial value of dest in ans */

	while (n--)
	{
		*dest++ = *src++; /* Copy one byte from src to dest */
	}
	return (ans); /* Return the original destination pointer */
}
