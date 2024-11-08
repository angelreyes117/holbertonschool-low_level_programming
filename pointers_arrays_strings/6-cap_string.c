#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Description: This function iterates through the string and capitalizes the
 * first letter of each word. A word is defined as a sequence of characters
 * separated by any of the following: space, tab, newline, comma, semicolon,
 * period, exclamation mark, question mark, quotation marks, parentheses,
 * and curly braces.
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize the first letter of the string if it's a letter */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	/* Iterate through the string */
	for (i = 1; str[i] != '\0'; i++)
	{
		/* Check if the current character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			/* If it's a separator, capitalize the next letter */
			if (str[i] == separators[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
				break;
			}
		}
	}
	return (str);
}
