#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - Prints buffer in hexadecimal
 * @buffer: The address of memory to print
 * @size: The size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
	}
	printf("\n");
}

/**
 * main - Check the _realloc function
 *
 * Return: Always 0.
 */
int main(void)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * 10);
	p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
	if (p == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	for (i = 0; i < 98; i++)
		p[i] = 98;

	simple_print_buffer(p, 98);
	free(p);
	return (0);
}
