#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - a dog's information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: dog owner
 *
 * Description: NIL
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
