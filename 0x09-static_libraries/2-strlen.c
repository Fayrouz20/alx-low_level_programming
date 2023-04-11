#include<stdio.h>
#include<stdlib.h>
/**
 *_strlen - function
 *@s : variable
 *Return: integer
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
