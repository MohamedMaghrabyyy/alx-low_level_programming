#include "lists.h"
/**
 * add_node - adds a new node at the beginning of the list
 * @head: head pointer of the linked list
 * @str: pointer to the node to be inserted
 *
 * Return: address of the added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = strlen(str);

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
