#include<stdio.h>
#include"dog.h"
#include<stdlib.h>
/**
 *new_dog - unction that creates a new dog.
 *@name : name of the dog
 *@age : age of the dog
 *@owner : owner of the dog
 *Return: dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, i;
	dog_t *dog;

	len1 = 0;
	len2 = 0;
	i = 0;
	while (name[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	while (owner[i] != '\0')
	{
		len2++;
		i++;
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (i = 0; i < len1 ; i++)
		dog->name[i] = name[i];
	for (i = 0; i < len2 ; i++)
		dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}
