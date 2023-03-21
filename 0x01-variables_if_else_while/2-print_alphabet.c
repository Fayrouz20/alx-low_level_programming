#include<stdio.h>
#include<stdlib.h>
/**
 *main - Entry point
 *Description: 'print the alphabet in lowercase'
 * Return: always 0
 */
int main(void)
{
	int nb;

	for (nb = 97; nb <= 122; nb++)
	{
		putchar(nb);
	}
	putchar('\n');
	return (0);
}
