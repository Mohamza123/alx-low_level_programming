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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
