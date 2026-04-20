#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to be added
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0, i;

	/* Check if input string is NULL */
	if (str == NULL)
		return (NULL);

	/* Allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Calculate length of string */
	while (str[len])
		len++;

	/* Allocate memory for string */
	new_node->str = malloc(len + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Copy string */
	for (i = 0; i < len; i++)
		new_node->str[i] = str[i];
	new_node->str[len] = '\0';

	/* Set length */
	new_node->len = len;

	/* Link new node to the beginning */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
