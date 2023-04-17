#include <stdio.h>
#include <ctype.h>
#include "dog.h"
/**
 * print_dog - prints instance of a dog struct
 * @d: passed instance of struct
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);
	if (!isdigit(d->age))
		printf("Age: (nil)\n");
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	printf("Owner: %s\n", d->owner);
}
