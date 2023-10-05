#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid
 * @grid: 2-dimensional grid address
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
    if (grid != NULL)
    {
        for (int i = 0; i < height; i++)
        {
            free(grid[i]);
        }
        free(grid);
    }
}

