#include<stdio.h>
/**
 *main - Entry point
 *Return: always 0
*/
int main(void)
{
	int nb;

	for (nb = 48; nb <= 57; nb++)
	{
		putchar(nb);
		if (nb == 57)
		{
			 break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
