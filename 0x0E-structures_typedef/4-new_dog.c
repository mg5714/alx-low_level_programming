#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strlen - Returns length of a string
  * @s: String
  * Return: len
  */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - Copy a string from src to dest
 * @dest: destination
 * @src: sources
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
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
char *nameCopy, *ownerCopy;
if (name == NULL || owner == NULL)
{
return (NULL);
}
dog_t *newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
nameCopy = strdup(name);
if (nameCopy == NULL)
{
free(newDog);
return (NULL);
}
ownerCopy = strdup(owner);
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
