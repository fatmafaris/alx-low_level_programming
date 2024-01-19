#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to space in memory containing string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, f, str_len1, str_len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (str_len1 = 0; s1[str_len1] != '\0'; str_len1++)
		;
	for (str_len2 = 0; s2[str_len2] != '\0'; str_len2++)
		;

	str = malloc(str_len1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (f = 0; f < n; f++)
	{
		str[i] = s2[f];
		i++;
	}
	str[i] = '\0';
	return (str);
}
