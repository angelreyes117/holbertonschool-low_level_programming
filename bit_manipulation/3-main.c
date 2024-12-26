/* 3-main.c
 * Test cases for the set_bit function
 */

#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test the set_bit function
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n;

	n = 1024;
	set_bit(&n, 5);
	printf("%lu\n", n);
	n = 0;
	set_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	set_bit(&n, 0);
	printf("%lu\n", n);
	return (0);
}
