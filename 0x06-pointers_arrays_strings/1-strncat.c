#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: the number of bytes to take from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s, d;

	d = 0;
	while (dest[d])
		d++;
	for (s = 0; s < n; s++)
	{
		if (src[s])
			dest[d++] = src[s];
		else
			break;
	}
	return (dest);
}
