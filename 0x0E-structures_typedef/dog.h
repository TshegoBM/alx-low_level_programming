#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure representing information about a dog.
 * @name: Pointer to a string representing the dog's name.
 * @age: Float representing the age of the dog.
 * @owner: Pointer to a string representing the owner's name.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
