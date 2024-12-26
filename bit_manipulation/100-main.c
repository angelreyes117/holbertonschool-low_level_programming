/* 100-main.c
 * Test cases for the get_endianness function
 */

#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test the get_endianness function
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
