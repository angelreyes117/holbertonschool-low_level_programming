#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers,
 *        starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, next_fib;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		next_fib = fib1 + fib2;

		if (count != 98)
			printf(", %lu", next_fib);
		else
			printf("\n");

		fib1 = fib2;
		fib2 = next_fib;
	}

	return (0);
}
