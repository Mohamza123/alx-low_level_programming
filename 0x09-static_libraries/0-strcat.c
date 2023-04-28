#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: concatenations of two string
 */
char *_strcat(char *dest, char *src)
{
	int d, i;

	d = 0;
	while (dest[d])
		d++;

	for (i = 0; src[i]; i++)
	{
		dest[d++] = src[i];
	}
	return (dest);
}
