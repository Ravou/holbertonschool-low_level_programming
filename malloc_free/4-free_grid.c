#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Libère un tableau 2D alloué dynamique
 * @grid: Pointeur vers le tableau 2D
 * @height: Hauteur du tableau (nombre de lignes)
 *
 * Return: Rien (void)
 */
void free_grid(int **grid, int height)
{
	int i; 

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
