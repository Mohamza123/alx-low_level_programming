#include "main.h"
/**
 * _strcpy - copy a atring to new one
 * @src: the str
 * @dest: the destination
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len])
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
