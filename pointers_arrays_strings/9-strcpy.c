#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating null byte
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	/* Loop to copy each character from src to dest */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Copy the terminating null byte */
	dest[i] = '\0';

	/* Return the destination pointer */
	return (dest);
}
