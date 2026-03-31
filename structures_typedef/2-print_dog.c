#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the elements of a struct dog
 * @d: pointer to struct dog
 *
 * Description: If d is NULL, prints nothing.
 *              If name or owner is NULL, prints (nil) instead.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
if (d->owner != NULL)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");
}
