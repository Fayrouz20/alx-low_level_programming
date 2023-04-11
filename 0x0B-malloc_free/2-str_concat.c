#include<stdio.h>
#include<stdlib.h>
/**
 *str_concat - function that concatenates two strings.
 *@s1 : first string
 *@s2 : second string
 *Return: pointer to string
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;

	i = 0;
	j = 0;
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	i = j = 0;
	while (*(s1 + i) != '\0')
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		*(str + i) = *(s2 + j);
		i++;
		j++;
	}
	*(str + i) = '\0';
	return (str);
}
