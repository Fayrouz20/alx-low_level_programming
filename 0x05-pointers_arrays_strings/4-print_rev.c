#include<stdio.h>
#include "main.h"
/**
 *print_rev - function()
 *@s : variable
 *return: void
*/
void print_rev(char *s)
{
	int str;
	int i;

	str = _strlen(s);
	for (i = str ; i > 0 ; i--)
	{
		putchar(*s);
	}
	putchar('\n');
}
