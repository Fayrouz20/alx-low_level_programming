#ifndef DOG_H
#define DOG_H
/**
 *struct dog - structure
 * @name : name of the dogs
 * @age : age of the dogs
 * @owner : the owner of the dog
 * Description: structure of dogs
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif
