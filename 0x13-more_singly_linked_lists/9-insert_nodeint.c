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
	unsigned int count = listint_len(*head);
	listint_t *nextPtr = get_nodeint_at_index(*head, idx);
	listint_t *prevPtr = *head;

	if (new == NULL)
		return (NULL);

	if (idx >= count || (*head == NULL && idx > 0))
		return (NULL);
	new->n = n;
	while (prevPtr->next != nextPtr)
		prevPtr = prevPtr->next;

	new->next = prevPtr->next;
	prevPtr->next = new;
	return (new);
}
