#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Description: This function replaces certain letters in a string with numbers
 * according to the following rules: 'a' and 'A' -> '4', 'e' and 'E' -> '3',
 * 'o' and 'O' -> '0', 't' and 'T' -> '7', 'l' and 'L' -> '1'.
 * Return: A pointer to the resulting encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *numbers = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Iterate through letters and numbers to match and replace */
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j / 2]; /* Replace letter with corresponding number */
				break;
			}
		}
	}
	return (str);
}
