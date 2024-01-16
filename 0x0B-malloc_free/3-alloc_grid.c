#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: integer
 * @height: integer
 *
 * Return: 2 dimentional array
 */
int **alloc_grid(int width, int height)
{
	int **tab, i, f;

	tab = malloc(size(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tab[i] == 0)
			{
				while (i--)
					free(tab[i]);
				free(tab);
				return (NULL);
			}
			for (f = 0; f < width; f++)
				tab[i][f] = 0;
		}
	}
	return (tab);
}
