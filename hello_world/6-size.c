#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *  Description: This program prints the size of various types
 */
int main(void)
{
 char a;
 i t b;
long int c;
l ong long int d;
float e;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}


