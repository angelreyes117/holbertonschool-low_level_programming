#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes from src to dest.
 * @dest: The destination buffer to which the string is copied.
 * @src: The source string to copy.
 * @n: The maximum number of bytes to copy from src.
 *
 * Description: This function copies up to n bytes from src to dest.
 * If src is shorter than n, the rest of dest is padded with null bytes.
 * If src is longer than n, it is truncated. A null byte is not added if
 * src has n or more bytes.
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy up to n characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Pad the rest of dest with null bytes if necessary */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
