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
	unsigned int i;
	listint_t *ptr = *head;

	if (new == NULL)
		return (NULL);
	for (i = 0; i <= idx && ptr != NULL; i++)
	{
		if (i == idx)
		{
			new->next = ptr->next;
			ptr->next = new;
			new->n = n;
			return (new);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
