#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	/* Loop through the array and print the elements */
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)  /* Avoid printing comma after the last element */
			printf(", ");
	}

	/* Print a new line after all elements */
	printf("\n");
}
