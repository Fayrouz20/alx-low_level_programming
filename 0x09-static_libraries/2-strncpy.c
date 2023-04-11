#include <stdio.h>
/**
 *_strncpy - unction that copies a string.
 *@dest : variable
 *@src : variable
 *@n : varibale
 *Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int nb;

	nb = 0;
	while (nb < n && src[nb] != '\0')
	{
		dest[nb] = src[nb];
		nb++;
	}
	while (nb < n)
	{
		dest[nb] = '\0';
		nb++;
	}
	return (dest);
}
