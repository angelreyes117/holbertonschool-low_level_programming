#include "main.h"

/**
 * print_number - Prints an integer using _putchar function only.
 * @n: The integer to print.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
