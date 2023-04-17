#include<stdio.h>
#include"dog.h"
#include<stdlib.h>
/**
 *init_dog - function that initialize a variable of type struct dog
 *@name : name of the dog
 *@d : the struct dog
 *@age : age of the dogs
 *@owner : owner of the dogs
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
