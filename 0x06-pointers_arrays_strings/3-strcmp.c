#include<stdio.h>
/**
 *_strcmp - compares two strings
 *@s1 : first string
 *@s2 : second string
 *Return: result of comparison
*/
int _strcmp(char *s1, char *s2)
{
	int nb;

	nb = 0;
	while (s1[nb] != '\0' && s2[nb] != '\0')
	{
		if (s1[nb] != s2[nb])
		{
			return (s1[nb] - s2[nb]);
		}
		nb++;
	}
	return (0);
}
