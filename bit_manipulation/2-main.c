/* 2-main.c
 * Test cases for the get_bit function
 */

#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test the get_bit function
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	return (0);
}