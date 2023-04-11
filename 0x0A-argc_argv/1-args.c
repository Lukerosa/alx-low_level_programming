#include "main.h"
#include <stdio.h>

/**
 * main - this is the main entry point
 * description: print arguments passed number
 * @argc: number of command line arguments
 * @argv: name of array
 * return: 0
 */

int main(int argc, char **argv)
{
    int count = 0;

    while (*++argv != NULL) {
        count++;
    }

    printf("%d\n", count);

    return 0;
}
