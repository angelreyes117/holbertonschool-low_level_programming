#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - Checks if a string is composed only of digits
 * @s: The string to check
 *
 * Return: 1 if the string is all digits, 0 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * _strlen - Calculates the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * multiply - Multiplies two large numbers represented as strings
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Return: A pointer to the result string, or NULL if failure occurs
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len = len1 + len2;
	int i, j, carry, n1, n2, sum;
	char *result = calloc(len + 1, sizeof(char));

	if (!result)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] - '0' + carry;
			carry = sum / 10;
			result[i + j + 1] = (sum % 10) + '0';
		}
		if (carry)
			result[i + j + 1] += carry;
	}

	for (i = 0; i < len; i++)
	{
		if (result[i] != '0')
			return (result + i);
	}

	return (result + len - 1); /* Return "0" if all digits are zero */
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The array of argument strings
 *
 * Return: 0 if successful, 98 if there is an error
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(argv[1], argv[2]);
	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%s\n", result);
	free(result);
	return (0);
}
