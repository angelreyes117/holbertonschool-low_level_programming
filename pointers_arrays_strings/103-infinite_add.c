#include "main.h"

/**
 * get_length - Returns the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int get_length(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number (string).
 * @n2: The second number (string).
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: Pointer to the result, or 0 if it cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = get_length(n1), len2 = get_length(n2);
	int i = len1 - 1, j = len2 - 1, k = size_r - 2, carry = 0;

	/* Blank line after declarations */
	if (len1 >= size_r || len2 >= size_r)
		return (0);
	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry)
	{
		int sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		if (k < 0)
			return (0);

		r[k--] = (sum % 10) + '0';
		carry = sum / 10;
	}

	for (i = 0; r[k + 1 + i]; i++)
		r[i] = r[k + 1 + i];
	r[i] = '\0';

	return (r);
}
