#include "main.h"
/**
 * _strncpy - copy a source string to dest
 * @dest: the dest
 * @src: the src
 * @n: numbers to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, s;

	s = 0;
	while (src[s])
		s++;
	for (i = 0; i < n; i++)
	{
		if (i < s)
			dest[i] = src[s];
	}
	return (dest);
}
