#include<stdio.h>
/**
 *_puts_recursion -  function that prints a string, followed by a new line.
 *@s : string
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
	putchar('\0');
}

