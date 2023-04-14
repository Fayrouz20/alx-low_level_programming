#include<stdio.h>
#include<stdlib.h>
/**
 *string_nconcat - function that concatenates two strings.
 *@s1 : first string
 *@s2 : second strig
 *@n : number of char to take
 *Return: result of concatination
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, leng1, leng2;

	leng1 = 0, leng2 = 0;
	i = 0, j = 0;
	while (*(s1 + leng1) != '\0' && s1)
		leng1++;
	while (*(s2 + leng2) != '\0' && s2)
		leng2++;
	if (n < leng2)
	str = malloc(sizeof(char *) * (leng1 + n + 1));
	else
	str = malloc(sizeof(char *) * (leng1 + leng2 + 1));

	if (str == NULL)
		return (NULL);
	while (i < leng1)
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	while (n < leng2 && i < (leng1 +n))
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
