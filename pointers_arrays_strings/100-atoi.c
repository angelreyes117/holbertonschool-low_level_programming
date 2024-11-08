#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer value of the string, or 0 if no number is found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	/* Skip non-numeric characters before the number */
	while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign *= -1;  /* Flip the sign when a '-' is encountered */
		i++;
	}

	/* Convert the string to an integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	/* Apply the sign */
	return (result * sign);
}

