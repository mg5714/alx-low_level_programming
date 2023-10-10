#include "dog.h"
#include <stdio.h>
/**
 * new_dog - function that create new dog
 * @name: name
 * @age: age
 * @owner: owner
 * 
 * Return : Return NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
{
return (NULL);
}
dog_t *newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
char *nameCopy = strdup(name);
if (nameCopy == NULL)
{
free(newDog);
return (NULL);
}
char *ownerCopy = strdup(owner);
if (ownerCopy == NULL)
{
free(nameCopy);
free(newDog);
return (NULL);
}
newDog->name = nameCopy;
newDog->age = age;
newDog->owner = ownerCopy;
return (newDog);
}
