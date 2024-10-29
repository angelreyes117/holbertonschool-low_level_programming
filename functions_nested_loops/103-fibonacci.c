#include <stdio.h>

/**
 * main - Calculates and prints the sum of even Fibonacci numbers
 *        not exceeding 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long fibonacci1 = 1, fibonacci2 = 2;
	long next_fibonacci;
	long sum_of_evens = 2;

	while (1)
	{
		next_fibonacci = fibonacci1 + fibonacci2;

		if (next_fibonacci > 4000000)
			break;

		if (next_fibonacci % 2 == 0)
			sum_of_evens += next_fibonacci;

		fibonacci1 = fibonacci2;
		fibonacci2 = next_fibonacci;
	}

	printf("%ld\n", sum_of_evens);
	return (0);
}
