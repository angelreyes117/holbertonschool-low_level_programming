#include "main.h"
#include <stdio.h>
/*
 * main - Entry point for testing the _sqrt_recursion function.
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}