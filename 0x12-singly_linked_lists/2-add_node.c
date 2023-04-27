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
	if (ptr->str == NULL)
	{
		free(ptr->str);
		return (NULL);
	}
	ptr->len = strlen(str) + 1;
	if (head == NULL)
	{
		*head = ptr;
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
