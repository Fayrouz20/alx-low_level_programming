#include<stdio.h>
/**
 *main - Entry point
 *Description: 'write alphabet'
 *Return: always 0
 */
int main(void)
{
	int upp;
	int low;

	for (low = 97; low <= 122; low++)
	{
		putchar(low);
	}
	for (upp = 65; upp <= 90; upp++)
	{
		putchar(upp);
	}
	putchar('\n');
	return (0);
}
