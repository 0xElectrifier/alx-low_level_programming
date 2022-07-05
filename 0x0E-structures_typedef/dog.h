#ifndef DOG_H
#define DOG_H

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

#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
