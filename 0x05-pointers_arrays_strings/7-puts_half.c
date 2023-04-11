#include<stdio.h>
#include<stdlib.h>
/**
 *puts_half - function
 *@str : variable
 *Return: void
*/
void puts_half(char *str)
{
	int length;
	int n;
	int i;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	n = (length - 1) / 2;
	for (i = n ; i > 0 ; i--)
	{
		putchar(*str++);
	}
	putchar('\n');
}
