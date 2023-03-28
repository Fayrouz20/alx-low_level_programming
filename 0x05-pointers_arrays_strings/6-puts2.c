#include<stdio.h>
/**
 *puts2 - function
 *@str : variable
 *return: void
*/
void puts2(char *str)
{
	int length;
	int s = 0;
	char *y = str;
	int i;

	length = 0;
	s = 0;
	while (*y != '\0')
	{
		y++;
		length++;
	}
	s = length - 1;
	for (i = 0 ; i <= s; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
