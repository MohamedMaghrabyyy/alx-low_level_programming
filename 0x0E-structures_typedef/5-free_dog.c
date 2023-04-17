#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the memory taken by a struct instance
 * @d: instance passed
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);

}
