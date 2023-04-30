#include "main.h"
/**
 * create_array - create an array of chars and assign a char to it
 * @size: size of the array
 * @c: the char to assign
 * Return: the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	for (int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
