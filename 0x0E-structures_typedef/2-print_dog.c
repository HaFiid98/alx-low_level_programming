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
		return;
	}
	if (!(d->name))
	{
		printf("Name : (nill)");
	}
	else
		printf("Name: %s", d->name);
	if (!(d->age))
		printf("Age: (nil)");
	else
		printf("Age: %f", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
}
