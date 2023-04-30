#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * argstostr - conc all args to a string
 * @ac: argument count
 * @av: arguments
 * Return: NULL or arg
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, l, j, strlen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
			l++;
	}
	str = malloc((sizeof(char) * l + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[strlen] = av[i][j];
			strlen++;
		}
		if (str[strlen] == '\0')
			str[strlen++] = '\n';
	}
	return (str);
}
