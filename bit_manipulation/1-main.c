/* 1-main.c
 * Test cases for the print_binary function
 */

#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test the print_binary function
 *
 * Return: Always 0
 */
int main(void)
{
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	return (0);
}