#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _str_len - Calculates the length of a string.
 * @str: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int _str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _str_copy - Copies a string into another.
 * @src: The source string.
 * @dest: The destination string.
 */
void _str_copy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0'; /* Null-terminate the string */
}

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to the dog's name.
 * @age: The dog's age.
 * @owner: Pointer to the dog's owner.
 *
 * Return: Pointer to the new dog_t struct, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	/* Allocate memory for the new dog struct */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* Allocate memory for name and owner strings */
	d->name = malloc(sizeof(char) * (_str_len(name) + 1));
	d->owner = malloc(sizeof(char) * (_str_len(owner) + 1));

	/* Check if memory allocation failed */
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	/* Copy the name and owner strings */
	_str_copy(name, d->name);
	_str_copy(owner, d->owner);

	/* Assign the age */
	d->age = age;

	return (d);
}
