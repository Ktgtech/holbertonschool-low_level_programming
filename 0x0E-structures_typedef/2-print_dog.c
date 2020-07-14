#include "dog.h"
#include <stdio.h>
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((d->name) == NULL)
			printf("nil\n");
		else
			printf("my_dog.name = %s\n", d->name);
		if((d->age) == 0)
			printf("nil\n");
		else
			printf("my_dog.age = %f\n", d->age);

		if ((d->owner) == NULL)
			printf("nil\n");
		else
			printf("my_dog.owner = %s\n", d->owner);
	}
}
