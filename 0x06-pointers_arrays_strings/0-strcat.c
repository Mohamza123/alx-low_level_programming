#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: concatenations of two string
 */
char *_strcat(char *dest, char *src)
{
	int d, s, i;
	char *res;

	d = strlen(dest[]);
	s = strlen(src[]);
	for (i = 0; i <= d + s; i++)
	{
		if (i < s)
			res[i] = dest[i];
		else if (i < s + d)
			res[i] = src[i - d];
		else
			res[i] = '\0';
	}
	return (&res);
}
