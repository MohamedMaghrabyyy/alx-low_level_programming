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
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc((strlen(name) + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
