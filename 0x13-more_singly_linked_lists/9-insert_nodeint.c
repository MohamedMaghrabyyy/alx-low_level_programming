#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: pointer to first node in linked list
 * @idx: index to insert the node at
 * @n: value to be stored in new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;
	listint_t *ptr = *head;
	listint_t *prevPtr = *head;
	listint_t *counter = *head;

	if (new == NULL)
		return (NULL);
	if (*head == NULL && idx == 0)
	{
		*head = new;
		new->n = n;
		return (new);
	}
	if (*head == NULL && idx > 0)
		return (NULL);
	while (counter != NULL)
	{
		i++;
		counter = counter->next;
	}
	while (idx < i)
	{
		while (idx > 0)
		{
			ptr = ptr->next;
			--idx;
		}
		while (prevPtr->next != ptr)
			prevPtr = prevPtr->next;
		new->next = ptr;
		prevPtr->next = new;
		new->n = n;
		return (new);
	}
	return (NULL);
}
