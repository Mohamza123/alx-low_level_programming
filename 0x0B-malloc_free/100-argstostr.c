#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * str_add - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_add(char *s1, char *s2)
{
	int i, ci;

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	s1 = realloc(s1, sizeof(char) * (i + ci + 1));

	if (s1 == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[ci] != '\0')
	{
		s1[i] = s2[ci];
		i++, ci++;
	}
	s1[i] = '\0';
	return (s1);
}
/**
 * argstostr - conc all args to a string
 * @ac: argument count
 * @av: arguments
 * Return: NULL or arg
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc((sizeof(char) * sizeof(*av)) + (ac * sizeof(char)));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac + 1; i++)
	{
		if(i < ac)
		{
			str = str_add(str, av[i]);
			str = str_add(str, "\n");
		}
	}
	str[i] = '\0';
	return (str);
}
