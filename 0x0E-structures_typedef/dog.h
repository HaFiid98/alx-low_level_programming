#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - Dog attributes
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: the attributes of a dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - typedef for dog structure
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif