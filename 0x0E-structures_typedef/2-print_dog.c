#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog.
 * @d: parameter.
 **/

void print_dog(struct dog *d)
{
	if (d)
	{
		if ((d->name == NULL))
			printf("Name: nil\n");
		else
			printf("my_dog.name = %s\n", d->name);

		if ((d->age == 0))
			printf("nil\n");
		else
			printf("my_dog.age = %f\n", d->age);

		if ((d->owner == NULL))
			printf("nil\n");
		else
			printf("my_dog.owner = %s\n", d->owner);
	}
}
