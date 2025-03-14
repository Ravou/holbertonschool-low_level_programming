#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - une fonction permet de retourné un pointeur vers un 2D array
 *@width: est la largeur du array
 *@height: esl l'hauteur du array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i--)
				free(grid[i]);
			free(grid[i]);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
