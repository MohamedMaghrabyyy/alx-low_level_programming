#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the linked list
 * @head: pointer to the first node of the linked list
 * @n: int value to be passed to new node
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
