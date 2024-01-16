#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int f = 0, size = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[size] != '\0'; size++)
	;

	p = malloc(size * sizeof(*str) + 1);

	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for (; f < size; f++)
			p[f] = str[f];
	}
	return (p);
}
