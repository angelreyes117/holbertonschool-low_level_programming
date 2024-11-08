#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Destination string to which src is appended.
 * @src: Source string to append to dest.
 * @n: Maximum number of bytes to use from src.
 *
 * Description: This function appends up to n bytes of src to dest.
 * It does not add a null byte if src has n or more bytes.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Move to the end of dest */
	while (*ptr)
		ptr++;

	/* Append up to n bytes of src to dest */
	while (n-- > 0 && *src)
		*ptr++ = *src++;

	/* Add terminating null byte */
	*ptr = '\0';

	return (dest);
}
