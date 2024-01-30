#include<stdio.h>
/**
 *_puts - function
 *@str : variable
 *return: nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str++);
	}
	putchar('\n');
}
