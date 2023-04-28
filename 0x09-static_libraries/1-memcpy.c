#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the dest
 * @src: the src
 * @n: size of src
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, d;

	d = 0;
	while (dest[d])
		d++;
	for (i = 0; i < n; i++)
	{
		if (i >= d)
			dest[i] = '\0';
		dest[i] = src[i];
	}
	return (dest);
}
