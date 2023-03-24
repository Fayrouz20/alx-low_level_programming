#include<stdio.h>

/**
 *print_numbers - print numbers between 0 and 9
 *Return: always 0
*/

void print_numbers(void)
{
	int nb;

	for (nb = 48 ; nb <= 57 ; nb++)
		putchar(nb);
	putchar('\n');
}
