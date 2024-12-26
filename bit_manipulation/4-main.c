/* 4-main.c
 * Test cases for the clear_bit function
 */

#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test the clear_bit function
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n;

	n = 1024;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	n = 0;
	clear_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	clear_bit(&n, 1);
	printf("%lu\n", n);
	return (0);
}
