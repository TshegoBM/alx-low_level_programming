#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - Structure representing information about a dog.
 * @name: Pointer to a string representing the dog's name.
 * @age: Float representing the age of the dog.
 * @owner: Pointer to a string representing the owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
