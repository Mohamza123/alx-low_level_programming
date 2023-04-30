#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - allocate two dimensional array
 * @width: wid
 * @height: height
 * Return: arr or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = calloc(height, sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = (int *)calloc(width, sizeof(int));
		if (arr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(arr[x]);
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
