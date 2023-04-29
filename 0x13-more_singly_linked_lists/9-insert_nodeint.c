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
	if (*head == NULL)
		return (NULL);
	
	while (counter != NULL)
	{
		i++;
		counter = counter->next;
	}
	if (idx == 0)
	{
		*head = new;
		new->n = n;
		return (new);
	}
	while (idx > 0 && ptr != NULL)
	{
		ptr = ptr->next;
		idx--;
		new->n = n;
	}
	if (ptr == NULL)
		return (NULL);
	while (prevPtr->next != ptr)
		prevPtr = prevPtr->next;
	new->next = ptr;
	prev->next = new;
	new->n = n;
	return (new);
}
