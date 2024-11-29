#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: A pointer to the struct dog to print.
 *
 * Description: Function prints the details of a dog. If any member is NULL,
 * it prints (nil) instead. If the struct pointer is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
