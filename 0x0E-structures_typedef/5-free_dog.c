#include"dog.h"
/**
 * free_dog - free dog
 * @d: input
 * Return: does not
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
		free(d->name);
		free(d->owner);
		free(d->age);
	}
}
