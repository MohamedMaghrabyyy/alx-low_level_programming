#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = *head;
	listint_t *prev = *head;
	listint_t *counter = *head;

	if (*head == NULL)
		return (-1);

	while (counter != NULL)
	{
		counter = counter->next;
		i++;
	}
	if (index == 0)
	{
		*head = ptr_next;
		free(ptr);
		return (1);
	}
	while (index > 0 && ptr != NULL)
	{
		ptr = ptr->next;
		index--;
	}
	if (ptr == NULL)
		return (-1);

	while (prev->next != ptr)
		prev = prev->next;
	prev->next = ptr->next;
	free(ptr);
	return (1);
}
