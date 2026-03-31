#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    /* الاسم */
    if (d->name != NULL)
        printf("Name: %s\n", d->name);
    else
        printf("Name: (nil)\n");

    /* العمر */
    printf("Age: %f\n", d->age);

    /* المالك */
    if (d->owner != NULL)
        printf("Owner: %s\n", d->owner);
    else
        printf("Owner: (nil)\n");
}
