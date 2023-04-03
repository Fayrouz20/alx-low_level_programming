#include<stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @s : first variable
 * @c : second variable
 * Return: char
*/
char *_strchr(char *s, char c)
{
	 int index;

	index = 0;

	while (*s != '\0')
	{
		if (*(s + index) == c)
			return (s + index);
		index++;
	}
	return (NULL);
}
