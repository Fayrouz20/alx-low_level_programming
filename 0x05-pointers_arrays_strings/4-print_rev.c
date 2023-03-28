#include<stdio.h>
#include<stdlib.h>
/**
 *print_rev - function
 *@s : variable
 *Return: void
*/
void print_rev(char *s)
{
	int length;
	int i;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length ; i > 0 ; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
