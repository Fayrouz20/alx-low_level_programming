#include<stdio.h>
/**
 * _strstr - function that searches a string for any of a set of bytes.
 * @haystack : first variable
 * @needle : second variable
 * Return: char
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0 ; i < needle[i] ; i++)
		{
			if (*haystack == *needle)
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
