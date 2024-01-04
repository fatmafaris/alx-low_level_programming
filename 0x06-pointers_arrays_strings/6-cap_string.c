#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 *
 * @str: string
 *
 * Return: pointer to the changed string
 */
char *cap_string(char *str)
{
	int f = 0;

	while (str[f])
	{
		while (!(str[f] >= 'a' && str[f] <= 'z'))
			f++;
		if (str[f - 1] == ' ' ||
				str[f - 1] == '\t' ||
				str[f - 1] == '\n' ||
				str[f - 1] == ',' ||
				str[f - 1] == ';' ||
				str[f - 1] == '.' ||
				str[f - 1] == '!' ||
				str[f - 1] == '?' ||
				str[f - 1] == '"' ||
				str[f - 1] == '(' ||
				str[f - 1] == ')' ||
				str[f - 1] == '{' ||
				str[f - 1] == '}' ||
				f == 0)
			str[f] -= 32;
		f++;
	}
	return (str);
}
