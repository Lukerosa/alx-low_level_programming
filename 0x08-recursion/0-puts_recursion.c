#include "main.h"

void printString(char *str)
{
	if (*str == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *str);
	printString(str + 1);
}
