#include "main.h"
/**
 * _strlen - get the length of a string
 * @s: a pointer to the begging of the string
 * Return: the length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
