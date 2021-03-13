#ifndef FUNCTION
#define FUNCTION
/**
 * struct dog - dog's information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 * Desription: dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
