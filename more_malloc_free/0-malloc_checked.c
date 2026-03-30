#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size in bytes
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
 (ptr == NULL)
exit(98);
return (ptr);
}
