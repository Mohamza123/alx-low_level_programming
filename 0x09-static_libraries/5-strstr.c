#include "main.h"
/**
 * _strstr - get the length of a prefix substring
 * @haystack: the string
 * @needle: to be scaned
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return ('\0');
}
