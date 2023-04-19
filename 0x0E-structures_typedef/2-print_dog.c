#include"dog.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * print_dog - print dog
 *
 * @d : struct d
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	if (!(d->name))
	{
		printf("Name : (nill)\n");
	}
	if (!(d->age))
	{
		printf("Age: (nil)\n");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	if ((d->name != NULL) && (d->age) && (d->owner != NULL)
			&& (d != NULL))
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
