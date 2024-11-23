#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the memory block
 *
 * Return: Pointer to the newly allocated memory, or NULL if failure occurs
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, copy_size;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	copy_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < copy_size; i++)
		new_ptr[i] = ((char *)ptr)[i];

	free(ptr);
	return (new_ptr);
}
