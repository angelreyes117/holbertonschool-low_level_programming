#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a formatted way.
 * @b: The buffer to print.
 * @size: The number of bytes to print from the buffer.
 *
 * Description: Prints 10 bytes per line. Each line starts with the position
 *              of the first byte in hexadecimal (8 chars), followed by the
 *              hexadecimal content (2 chars) of the buffer, grouped 2 bytes
 *              at a time and separated by spaces. If a byte is printable, it
 *              is printed as-is; otherwise, a '.' is printed. If size is 0
 *              or less, only a new line is printed.
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (i < size)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", *(b + i + j));
			else
				printf("  ");
			if (j % 2)
				printf(" ");
		}

		for (j = 0; j < 10 && i + j < size; j++)
		{
			char c = *(b + i + j);

			if (c >= 32 && c <= 126)
				printf("%c", c);
			else
				printf(".");
		}
		printf("\n");
		i += 10;
	}
}
