#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isnum - check if the string is a num or not
 * @str: the string
 * Return: 0 if it's a num otherwise 1
 */
int isnum(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}
/**
 * main - add two nums
 * @argc: arg count
 * @argv: arg values
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isnum(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
