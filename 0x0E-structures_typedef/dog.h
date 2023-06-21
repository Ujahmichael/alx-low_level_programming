#ifndef DOG_H
#define DOG_H

/**
 * main - dog tpyr and struct
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -  typedef of dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
