#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
}
