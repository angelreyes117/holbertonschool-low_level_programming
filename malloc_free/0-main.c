#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * simple_print_buffer - Prints buffer in hexadecimal format.
 * @buffer: The address of memory to print.
 * @size: The size of the memory to print.
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/*
 * main - Tests the create_array function.
 *
 * Return: Always 0 on success, or 1 if memory allocation fails.
 */
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
