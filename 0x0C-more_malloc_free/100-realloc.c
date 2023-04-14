#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *_realloc - function that reallocates a memory block
 *@ptr : pointer to memory
 *@old_size : the size for ptr
 *@new_size : the new size
 *Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	unsigned int i, j;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		str = malloc(new_size);
		if (str == NULL)
		{
			free(str);
			return (NULL);
		}
		return (str);
	}
	if (new_size == old_size)
		return (ptr);
	str = malloc(new_size);
	if (str == NULL)
	{
		free(ptr);
		free(str);
		return (NULL);
	}
	j = new_size > old_size ? old_size : new_size;
	for (i = 0 ; i < j ; i++)
		*(str + i) = ((char *) ptr)[i];
	free(ptr);
	return (str);
}
