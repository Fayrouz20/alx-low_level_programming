#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - function that creates an array of chars.
 * @size : unsigned int
 * @c : char
 * Return: char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
		if (size == 0 || arr == NULL)
			return (NULL);

		for (i = 0 ; i < size ; i++)
			*(arr + i) = c;
	return (arr);
}
