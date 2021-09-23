#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2D array of integers.
* @width: width
* @height: height
* Return: pointer of an array of integers
*/
int **alloc_grid(int width, int height)
{
int **arr_print;
int i, j;

if (width < 1 || height < 1)
return (NULL);

arr_print = malloc(height * sizeof(int *));
if (arr_print == NULL)
{
free(arr_print);
return (NULL);
}

for (i = 0; i < height; i++)
{
arr_print[i] = malloc(width * sizeof(int));
if (arr_print[i] == NULL)
{
for (i--; i >= 0; i--)
free(arr_print[i]);
free(arr_print);
return (NULL);
}
}

for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
arr_print[i][j] = 0;

return (arr_print);
}
