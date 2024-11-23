#include <stdio.h>

/**
 * main - Prints the program's name, followed by a new line.
 * @argc: Argument count, unused in this program.
 * @argv: Array of strings containing command-line arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
