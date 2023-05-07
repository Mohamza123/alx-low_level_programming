#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, ld;

	i = ld = 0;
	while (dest[ld])
		ld++;

	while (src[ls])
		ls++;

	for (i = ld; *src; i++, src++)
	{
		dest[i] = *src;
	}
	dest[i] = '\0';
	return (dest);
}
