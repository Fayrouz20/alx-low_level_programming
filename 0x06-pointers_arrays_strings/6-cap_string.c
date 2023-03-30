#include<stdio.h>
/**
 *cap_string - capitalizes all words of a string.
 *@nb : string
 *Return: char
*/
char *cap_string(char *nb)
{
	int i;

	i = 0;
	while (nb[i])
	{
		while (!(nb[i] >= 'a' && nb[i] <= 'z'))
			i++;

		if (nb[i - 1] == ' ' ||
		 nb[i - 1] == '\t' ||
		 nb[i - 1] == ',' ||
		 nb[i - 1] == ';' ||
		 nb[i - 1] == '.' ||
		 nb[i - 1] == '!' ||
		 nb[i - 1] == '?' ||
		 nb[i - 1] == '"' ||
		 nb[i - 1] == '(' ||
		 nb[i - 1] == ')' ||
		 nb[i - 1] == '{' ||
		 nb[i - 1] == '}' ||
		 nb[i - 1] == '0')
		nb[i] = nb[i] - 32;
		i++;
	}
	return (nb);
}
