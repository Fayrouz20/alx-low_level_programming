#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *_calloc - function that allocates memory for an arrayi
 *@nmemb : nb of elements
 *@size : size of elements
 *Return: nothind
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i, leng;

	leng = nmemb * size;
	if (leng == 0)
		return (NULL);
	s = malloc(leng);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0 ; i < leng ; i++)
	{
		*(s + i) = 0;
	}
	return (s);
}
