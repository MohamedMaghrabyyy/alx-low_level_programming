#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - passes values to a struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->age;
	d->name;
	d->owner;
}
