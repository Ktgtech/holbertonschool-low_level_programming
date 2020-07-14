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
		if ((d->name))
			printf("my_dog.name = %s\n", d->name);
		else
			printf("Name: nil\n");
		if ((d->age))
			printf("my_dog.age = %f\n", d->age);
		else
			printf("Age: nil\n");
		if ((d->owner))
			printf("my_dog.owner = %s\n", d->owner);
		else
			printf("Owner: nil\n");
	}
}
