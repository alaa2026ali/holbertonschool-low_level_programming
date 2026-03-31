#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to newly created dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
size_t i;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
if (name != NULL)
{
for (i = 0; name[i]; i++)
;
d->name = malloc(i + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
for (i = 0; name[i]; i++)
d->name[i] = name[i];
d->name[i] = '\0';
}
else
d->name = NULL;
if (owner != NULL)
{
for (i = 0; owner[i]; i++)
;
d->owner = malloc(i + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (i = 0; owner[i]; i++)
d->owner[i] = owner[i];
d->owner[i] = '\0';
}
else
d->owner = NULL;
d->age = age;
return (d);
}
