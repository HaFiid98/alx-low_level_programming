#include"dog.h"
#include<stdio.h>
#include <stdlib.h>
/**
 * *new_dog - create a new dog
 * @name: name
 * @age:age
 * @owner:own
 * Return: return struct dog type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dogo;
int l1, l2;

l1 = _strlen(name);
l2 = _strlen(owner);
if ((name == NULL) || (owner == NULL))
{
	return (0);
}
dogo = malloc(sizeof(dog_t));
if (dogo == NULL)
{
	return (NULL);
}

dogo->name = malloc(sizeof(char) * l1 + 1);
dogo->owner = malloc(sizeof(char) * l2 + 1);
if (dogo->name == NULL)
{
	free(dogo);
	return (NULL);
}
if (dogo->owner == NULL)
{
	free(dogo);
	free(dogo->name);
	return (NULL);
}
_strcpy(dogo->name, name);
_strcpy(dogo->owner, owner);
dogo->age = age;
return (dogo);
}
/**
 * _strlen - lenght
 * @s: input
 * Return: legnth
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copy
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
