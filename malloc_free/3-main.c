#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * print_grid - Prints a 2D grid of integers.
 * @grid: The address of the two-dimensional grid.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/*
 * main - Tests the alloc_grid function.
 *
 * Return: Always 0 on success, or 1 if memory allocation fails.
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	return (0);
}
