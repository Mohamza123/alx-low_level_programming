#include <stdio.h>
/**
 * main - prints every arg
 * @argc: arg count
 * @argv: arg array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
