#include "stdio.h"
/**
 * main - writes the program name
 * @argc: arg count
 * @argv: arg value
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
