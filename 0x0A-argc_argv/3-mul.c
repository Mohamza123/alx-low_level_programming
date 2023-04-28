#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul two nums
 * @argc: arg count
 * @argv: arg values
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
