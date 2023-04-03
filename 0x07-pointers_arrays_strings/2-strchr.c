#include<stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @s : first variable
 * @c : second variable
 * Return: char
*/
char *_strchr(char *s, char c)
{

	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
