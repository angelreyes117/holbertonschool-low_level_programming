#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string to which src is appended.
 * @src: Source string to append to dest.
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Move to the end of dest */
	while (*ptr)
		ptr++;

	/* Append src to dest */
	while (*src)
		*ptr++ = *src++;

	/* Add terminating null byte */
	*ptr = '\0';

	return (dest);
}
