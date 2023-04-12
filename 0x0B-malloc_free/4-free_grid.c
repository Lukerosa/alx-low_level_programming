#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * Description: Returns a pointer to a 2-D array of integers
 * @width: Integer
 * @height: Integer
 * Return: int
 */

int** alloc_grid(int width, int height)
{
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    int** grid = (int**) calloc(height, sizeof(int*));
    if (grid == NULL) {
        return NULL;
    }

    for (int i = 0; i < height; ++i) {
        grid[i] = (int*) calloc(width, sizeof(int));
        if (grid[i] == NULL) {
            for (int j = i - 1; j >= 0; --j) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
    }
    return grid;
}
