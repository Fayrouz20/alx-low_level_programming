#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space.
 * @str : pointer
 * Return: pointer
*/
char *_strdup(char *str)
{
	char *var;
	int i, nb;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	var = malloc(sizeof(char) * (i + 1));
	if (var == NULL)
		return (NULL);
	for (nb = 0 ; nb < i; nb++)
		var[nb] = str[nb];
	return (var);
}
