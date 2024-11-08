#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	/* Calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine the starting point for the second half */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
