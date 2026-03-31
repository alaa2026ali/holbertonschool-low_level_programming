#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: pointer to dog to free
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;          // إذا كان المؤشر NULL، لا نفعل شيء

    if (d->name != NULL)
        free(d->name);   // نحرر الذاكرة الخاصة بالاسم

    if (d->owner != NULL)
        free(d->owner);  // نحرر الذاكرة الخاصة بالمالك

    free(d);             // نحرر الذاكرة الخاصة بالهيكل نفسه
}
