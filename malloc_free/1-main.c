#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * main - Tests the _strdup function.
 *
 * Return: Always 0 on success, or 1 if memory allocation fails.
 */
int main(void)
{
	char *s;

	s = _strdup("Duplicated");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
