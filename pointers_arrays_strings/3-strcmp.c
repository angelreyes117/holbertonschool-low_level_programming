#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Description: This function compares two strings character by character.
 * It returns an integer value based on the comparison:
 * - 0 if s1 and s2 are equal.
 * - A negative value if s1 is less than s2.
 * - A positive value if s1 is greater than s2.
 * Return: The difference between the ASCII values of the first unmatched
 * characters, or 0 if the strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
