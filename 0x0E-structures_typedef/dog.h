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
}dog;

/**
* dog_t - set the information about dogs.
* @name: Dog's name.
* @age: Dog's age.
* @owner: Dog's owner.
**/

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);

#endif /* _DOG_H */
