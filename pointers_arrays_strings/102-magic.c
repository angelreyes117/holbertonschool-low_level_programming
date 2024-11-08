#include <stdio.h>

/**
 * main - modifies the value at index 2 of the array using a pointer
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * Add one line of code here
	 * so that this prints "a[2] = 98\n"
	 */
	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
