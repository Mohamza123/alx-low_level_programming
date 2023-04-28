#include "main.h"
/**
 * _strcpy - copy a string from a src to dest
 * @dest: the dest
 * @src: the src
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int l = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		l++;
	}
	l++;
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
