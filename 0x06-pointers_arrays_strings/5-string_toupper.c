#include<stdio.h>
/**
 *string_toupper -  changes all lowercase letters of a string to uppercase.
 *@nb : string
 *Return: string
*/
char *string_toupper(char *nb)
{
	int i;

	i = 0;
	while (nb[i] != '\0')
	{
		if (nb[i] >= 'a' && nb[i] <= 'z')
		{
			nb[i] = nb[i] - 32;
		}
		i++;
	}
	return (nb);
}
