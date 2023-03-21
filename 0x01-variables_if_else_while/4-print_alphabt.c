#include<stdio.h>
/**
 *main - Entry point
 *Description: 'print alphbet in lowercase'
 *Return: always 0
 */
int main(void)
{
	int low = 97;

	while (low <= 122)
	{
		if (low == 101 || low == 107)
		{
			continue;
		}
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
