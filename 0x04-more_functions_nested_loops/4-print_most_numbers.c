#include<stdio.h>

/**
 *print_most_numbers - print numbers expect 2 & 4
 *Return: no return
*/

void print_most_numbers(void)
{
	int nb;

	for (nb = 48 ; nb <= 57 ; nb++)
	{
		if (nb == 50 || nb == 52)
			continue;
		putchar(nb);
	}
	putchar('\n');
}
