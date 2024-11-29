#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog.
 * @d: Pointer to the dog to be freed.
 */
void free_dog(dog_t *d)
{
	/* Check if the dog pointer is not NULL */
	if (d != NULL)
	{
		/* Free the memory allocated for the name and owner */
		free(d->name);
		free(d->owner);
		/* Free the memory allocated for the dog structure */
		free(d);
	}
}
