#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14, ten times.
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
