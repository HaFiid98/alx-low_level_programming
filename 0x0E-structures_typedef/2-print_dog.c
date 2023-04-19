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
		printf("Name: %s\n", d->name);
	/*if (!(d->age))
		printf("Age: (nil)\n");
	else*/
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
