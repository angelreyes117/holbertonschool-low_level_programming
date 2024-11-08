#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	char password[100];
	int i = 0, target = 2772; /* target is the ASCII sum needed for password */

	srand(time(NULL));

	/* Generate characters until the sum is close to the target */
	while (sum < target - 126) /* ASCII value max for readable chars */
	{
		password[i] = rand() % 94 + 33; /* Generate printable ASCII */
		sum += password[i];
		i++;
	}

	/* Adjust the last character to reach the exact target sum */
	password[i] = target - sum;
	password[i + 1] = '\0';

	printf("%s", password);
	return (0);
}
