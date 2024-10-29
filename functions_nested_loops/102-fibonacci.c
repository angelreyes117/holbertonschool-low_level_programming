#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count;
    long fibonacci1 = 1, fibonacci2 = 2, next_fibonacci;

    printf("%ld, %ld", fibonacci1, fibonacci2);

    for (count = 3; count <= 50; count++)
    {
        next_fibonacci = fibonacci1 + fibonacci2;
        printf(", %ld", next_fibonacci);
        fibonacci1 = fibonacci2;
        fibonacci2 = next_fibonacci;
    }

    printf("\n");
    return (0);
}
