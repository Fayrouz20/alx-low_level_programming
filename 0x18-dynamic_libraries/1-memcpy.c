#include<stdio.h>
/**
 * _memcpy - function that fills memory with a constant byte.
 * @dest : first variable
 * @src : second variable
 * @n : int
 * Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(dest + index) = *(src + index);
	}

	return (dest);
}
