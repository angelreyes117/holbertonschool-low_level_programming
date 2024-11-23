#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * main - Tests the str_concat function.
 *
 * Return: Always 0 on success, or 1 if memory allocation fails.
 */
int main(void)
{
	char *s;

	s = str_concat("Best ", "School");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
