#include<stdio.h>
/**
 *main - Entry point
 *return: always 0
*/
int main(void)
{
	int nb;

	for (nb = 0; nb <= 9; nb++)
	{
		putchar(nb + 48);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
