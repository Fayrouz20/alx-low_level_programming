#include<stdio.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s : first variable
 * @accept : second variable
 * Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; i < accept[i] ; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
