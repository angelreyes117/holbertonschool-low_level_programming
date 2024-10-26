#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
