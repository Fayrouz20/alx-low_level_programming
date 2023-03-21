#include<stdio.h>
/**
 *main - Entry point
 *Return: always 0
*/
int main(void)
{
	int nb;
	int low;

	for (nb = 0; nb <= 9; nb++)
	{
		putchar(nb + 48);
	}
	for (low = 97; low <= 102; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
