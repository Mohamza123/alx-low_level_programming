#include <stdio.h>
/**
 * main : main function to get sizes of variables
 *
 *Return: 0 on success
 *
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of an long int: %i byte(s)\n", sizeof(long));
	printf("Size of an long long int: %i byte(s)\n", sizeof(long long));
	printf("Size of an float: %i byte(s)\n", sizeof(float));
	return (0);
}
