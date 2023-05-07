#include "main.h"
/**
 * _strncat - concatenates two string
 * @dest: destination
 * @src: source
 * @n: numbers to 
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, ld;

	i = ld = 0;
	while (dest[ld])
		ld++;

	for (i = ld; *src && i - ld < n; i++, src++)
	{
		dest[i] = *src;
	}
	dest[i] = '\0';
	return (dest);
}
