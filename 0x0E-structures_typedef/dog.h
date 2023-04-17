#ifndef DOG_H
#define DOG_H
/**
 *struct dog - structure
 * @name : name of the dogs
 * @age : age of the dogs
 * @owner : the owner of the dog
 * Description: structure of dogs
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - typedef of struct dog
*/

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
