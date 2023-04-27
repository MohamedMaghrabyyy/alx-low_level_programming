#include "lists.h"
/**
 * add_node_end - adds a node at the end of the linked list
 * @head: pointer to first node in linked list
 * @str: node to be inserted in the linked list
 * Return: address of inserted node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *ptr = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newNode;
	}
	return (newNode);
}
