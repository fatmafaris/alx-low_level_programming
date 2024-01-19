#include "main.h"

/**
 * *_realloc -  reallocates a memory block using malloc and free
 *
 * @ptr: pointer to old memory
 * @old_size: old size allocated by malloc in the heap
 * @new_size: new size allocated by the _realloc function
 *
 * Return: pointer to new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *oldp = ptr;
	size_t i, max = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		if (new_size > old_size)
			max = old_size;
		for (i = 0; i < max; i++)
			p[i] = oldp[i];
		free(ptr);
		return (p);
}
