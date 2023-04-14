#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
/**
 *array_range - function that creates an array of integers.
 *@min : minimun
 *@max : maximun
 *Return: ponter
*/
int *array_range(int min, int max)
{
	int *range;
	int i;

	if (min > max)
		return (NULL);
	range = malloc(sizeof(*range) * (max - min + 1));
	if (range == NULL)
	{
		free(range);
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
		*(range + i) = min + i;
	return (range);
}
