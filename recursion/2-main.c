#include "main.h"
#include <stdio.h>
/*
 * main - Entry point for testing the _strlen_recursion function.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	return (0);
}
