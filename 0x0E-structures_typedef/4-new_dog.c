#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * *new_dog - creates a new instance of a struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of a dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
