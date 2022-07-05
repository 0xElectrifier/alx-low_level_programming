#ifndef DOG_H
#define DOG_H

/**
 * dog_t - new struct dog
 */
typedef struct dog dog_t;


/**
 * struct dog - New dog
 * @name: name of dog
 * @age: it age
 * @owner: it owner
 *
 * Description: Just a struct with info about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
