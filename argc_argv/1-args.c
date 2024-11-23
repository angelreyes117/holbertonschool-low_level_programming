#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: Argument count.
 * @argv: Array of strings containing command-line arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
