/* 
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, on error -1 and errno is set appropriately
 */
#include <unistd.h>

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
