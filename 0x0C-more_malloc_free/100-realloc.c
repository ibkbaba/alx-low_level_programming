#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 * Return: pointer to newly allocated memory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *oldp = ptr;

	if (ptr != NULL)
		clone = ptr;
		else
		{ return (malloc(new_size)); }
		if (new_size == old_size)
			return (ptr);
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (0);
		}
		relloc = malloc(new_size);
		if (relloc == NULL)
			return (0);
		for (i = 0; i < (old_size || i < new_size); i++)
		{
			*(relloc + i) = clone[i];
		}
		free(ptr);
		return (relloc);
}
