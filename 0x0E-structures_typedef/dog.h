#ifndef DOG_H
#define DOH_H

/**
 * struct dog - for dogs
 * @name: its name
 * @age: its age
 * @owner: its owner
 *
 * Description: dogs stucrt
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
