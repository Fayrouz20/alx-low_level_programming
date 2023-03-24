#include<stdio.h>

/**
 *print_line - print line n times
 *@n : variable
 *Return: no return
*/

void print_line(int n)
{
	int x;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (x = 0 ; x < n ; x++)
			putchar(95);
		putchar('\n');
	}
}
