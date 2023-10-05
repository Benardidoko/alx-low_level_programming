#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - ought to print a grid of integers
 * @grid: the address of the two-dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    for (h = 0; h < height; h++)
    {
        for (w = 0; w < width; w++)
        {
            printf("%d ", grid[h][w]);
        }
        printf("\n");
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }

    printf("Initial grid:\n");
    print_grid(grid, 6, 4);

    grid[0][3] = 98;
    grid[3][4] = 402;

    printf("\nModified grid:\n");
    print_grid(grid, 6, 4);

    free_grid(grid, 4);

    return (0);
}

