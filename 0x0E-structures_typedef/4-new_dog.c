#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - new dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
{
return (NULL);
}
my_dog->name = name;
my_dog->age = age;
my_dog->owner = owner;
return (my_dog);
}
