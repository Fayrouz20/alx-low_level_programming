#include<stdio.h>
/**
 * _memset - function that fills memory with a constant byte.
 * @s : first variable
 * @b : second variable
 * @n : int
 * Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(s + index) = b;
	}

	return (s);
}
