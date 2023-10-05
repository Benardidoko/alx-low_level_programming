#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this ought to return a pointer to a 2 dimensional array
 * @width: horizontal length of the array
 * @height: the vertical length of the array
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int m, n;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		gridout[m] = malloc(width * sizeof(int));
		if (gridout[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(gridout[m]);
			free(gridout);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
		for (n = 0; n < width; n++)
			gridout[m][n] = 0;
	return (gridout);
}
