#include "main.h"
/**
 * _strstr - get the length of a prefix substring
 * @haystack: the string
 * @needle: to be scaned
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				return (haystack[i]);
		}
	}
	return ('\0');
}
