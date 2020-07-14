#include "dog.h"
#include <stdio.h>
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((d->name))
			printf("my_dog.name = %s\n", d->name);
		else
			printf("nil\n");
		if((d->age))
			printf("my_dog.age = %f\n", d->age);
		else
			printf("nil\n");
		if ((d->owner))
			printf("my_dog.owner = %s\n", d->owner);
		else
			printf("nil\n");
	}
}
