#include<stdio.h>
/**
 *_puts - function
 *@str : variable
 *return: nothing
*/
void _puts(char *str)
{
	putchar(*str++);
	putchar('\n');
}

