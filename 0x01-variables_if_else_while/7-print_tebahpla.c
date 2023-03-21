#include<stdio.h>
/**
 *main - Entry point
 *Return: always 0
*/
int main(void)
{
	int low;

	for (low = 122; low >= 97; low--)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
