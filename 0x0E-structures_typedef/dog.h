#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - set the information about dogs.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 **/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* _DOG_H */