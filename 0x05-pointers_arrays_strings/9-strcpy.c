#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 *
 * @dest: copy to
 * @src: copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int f = 0;
	int x = 0;

	while (*(src + f) != '\0')
	{
		f++;
	}
	for ( ; x < f ; x++)
	{
		dest[x] = src[x];
	}
	dest[f] = '\0';

	return (dest);
}
