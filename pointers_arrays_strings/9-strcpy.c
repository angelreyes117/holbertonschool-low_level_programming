#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the null byte
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	/* Copy each character from src to dest */
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Add the null byte at the end of dest */
	dest[i] = '\0';

	return (dest);
}

