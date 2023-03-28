#include<stdio.h>
/**
 *rev_string - reverse string
 *@s : variable
 *return: void
*/
void rev_string(char *s)
{
	char str = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
		count++;
	for (i = 0 ; i < count ; i++)
	{
		count--;
		str = s[i];
		s[i] = s[count];
		s[count] = str;
	}
}
