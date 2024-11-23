#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Checks if a string is a positive number.
 * @s: The string to check.
 *
 * Return: 1 if the string is a positive number, 0 otherwise.
 */
int is_number(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - Adds positive numbers.
 * @argc: Argument count.
 * @argv: Array of strings containing command-line arguments.
 *
 * Return: 0 if successful, 1 if an invalid argument is found.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
