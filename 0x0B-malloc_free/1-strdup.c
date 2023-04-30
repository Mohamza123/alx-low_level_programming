#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - copy a string to ne loccation
 * @str: the string to copy
 * Return: a pointer to the new string or NULL
 */
char *_strdup(char *str)
{
	unsigned int l = 0;
	char *str2;

	while (str[l])
		l++;
	if (str == NULL)
		return (NULL);

	*str2 =(char *) malloc(sizeof(char) * (l + 1));
	while (str)
	{
		*str2 = *str;
		str2++;
		str++;
	}
	return (str2);
}
