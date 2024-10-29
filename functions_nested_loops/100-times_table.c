#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: number defining the size of the times table
 *
 * Description: If n is greater than 15 or less than 0,
 * the function does not print anything. Each row in the table
 * has numbers separated by a comma and space, and aligned.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j != 0)
				printf(", ");
			if (product < 10 && j != 0)
				printf("  %d", product);
			else if (product < 100 && j != 0)
				printf(" %d", product);
			else
				printf("%d", product);
		}
		printf("\n");
	}
}
