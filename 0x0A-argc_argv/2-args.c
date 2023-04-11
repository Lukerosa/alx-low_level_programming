#include "main.h"
#include <stdio.h>

/**
 * main - this is the main entry point
 * Description: it prints all the arguments that it receives
 * @argc: number of commandline arguments
 * @argv: the name of the array
 * return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
