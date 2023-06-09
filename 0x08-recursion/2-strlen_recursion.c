#include "main.h"
/**
 * _strlen_recursion - return the len of a string
 * @s: the string
 * Return: the string len
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
