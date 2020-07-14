#ifndef _DOG_H
#define _DOG_H
#include <stdlib.h>

/**
 * struct dog - set the information about dogs.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 **/

typedef struct dog;
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* _DOG_H */
