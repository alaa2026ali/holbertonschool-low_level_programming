#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog (allocates memory)
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog (dog_t *), or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
if (name != NULL)
{
d->name = strdup(name);
if (d->name == NULL)
{
free(d);
return (NULL);
}
}
else
d->name = NULL;
if (owner != NULL)
{
d->owner = strdup(owner);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
}
else
d->owner = NULL;
d->age = age;
return (d);
}
