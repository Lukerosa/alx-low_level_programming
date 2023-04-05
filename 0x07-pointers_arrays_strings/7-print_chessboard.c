#include "main.h"

/**
 * print_chessboard - Entry point
 * Description: Prints the chessboard
 * @a: 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++) // Fixed the loop condition to iterate from 0 to 7
    {
        for (j = 0; j < 8; j++)
        {
            _putchar(a[i][j]); // Used _putchar instead of putchar
        }
        _putchar('\n'); // Used _putchar instead of putchar
    }
}
