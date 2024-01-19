#include "main.h"

/**
 * *array_range - creates an array of integers.
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: int pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int i, len;
	int *array;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
