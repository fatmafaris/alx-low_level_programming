#include "main.h"

/**
 * _strlen - find length of string
 *
 * @s: string
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * *str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int siz1, siz2, f;
	char *p;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	siz1 = _strlen(s1);
	siz2 = _strlen(s2);
	p = malloc((siz1 + siz2) * sizeof(char) + 1);
	if (p == 0)
		return (0);

	for (f = 0; f < siz1 + siz2; f++)
	{
		if (f < siz1)
			p[f] = s1[f];
		else
			p[f] = s2[f - siz1];
	}
	p[f] = '\0';
	return (p);
}
