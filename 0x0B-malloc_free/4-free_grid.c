#include<stdio.h>
#include<stdlib.h>
/**
 *free_grid - function that frees a 2 dimensional grid
 *@grid : 2 dimensial grid
 *@height : integer
 *Return: nothing
*/
void free_grid(int **grid, int height)
{
	int nb;

	for (nb = 0 ; nb < height ; nb++)
		free(grid[nb]);
	free(grid);
}
