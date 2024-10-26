#include <unistd.h>

/**
 * main - Prints a quote to the standard error
 * Return: Always 1
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar,\n", 49);
write(2, "2015-10-19\n", 12);
return (1);
}



