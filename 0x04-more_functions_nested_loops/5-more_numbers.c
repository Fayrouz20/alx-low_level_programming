#include<stdio.h>

/**
 *more_numbers - print numbers 14 times
 *Return:void no return
*/

void more_numbers(void)
{
	int i;
	int nb;

	for (i = 0 ; i < 10 ; i++)
	{
		for (nb = 0 ; nb <= 14 ; nb++)
		{
			if (nb > 9)
			{
				putchar((nb / 10) + '0');
			}
			putchar((nb % 10) + '0');
		}
		putchar('\n');
	}
}
