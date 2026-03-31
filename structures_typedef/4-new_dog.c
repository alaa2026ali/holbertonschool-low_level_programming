#include <stdio.h>
#include <stdlib.h>  /* malloc, free */
#include <string.h>  /* strdup */
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

    /* allocate memory for the struct dog */
    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    /* copy name */
    if (name != NULL)
    {
        d->name = strdup(name);  /* نسخ الاسم في مكان جديد */
        if (d->name == NULL)     /* تحقق من malloc داخل strdup */
        {
            free(d);
            return (NULL);
        }
    }
    else
        d->name = NULL;

    /* copy owner */
    if (owner != NULL)
    {
        d->owner = strdup(owner);  /* نسخ المالك في مكان جديد */
        if (d->owner == NULL)
        {
            free(d->name);
            free(d);
            return (NULL);
        }
    }
    else
        d->owner = NULL;

    /* نسخ العمر */
    d->age = age;

    return (d);
}
