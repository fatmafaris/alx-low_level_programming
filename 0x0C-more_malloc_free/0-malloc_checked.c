#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: integer
 *
 * Return: pointer to array or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
