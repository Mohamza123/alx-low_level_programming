#include <stdio.h>
/**
 * main - writes num of args
 * @argc: arg count
 * @argv: arg value
 * Return: 0
 */
int main(int argc, char **argv)
{
	argv[0] = "ae";
	printf("%d\n", argc - 1);
	return (0);
}
