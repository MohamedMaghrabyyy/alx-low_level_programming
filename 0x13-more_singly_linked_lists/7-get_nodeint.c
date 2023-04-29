#include "lists.h"
/**
 * get_nodeint_at_index - get the address of the nth node
 * @head: pointer to first node in linked list
 * @index: order of the required node
 * Return: address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i;

	for (i = 0; i <= index && ptr != NULL; i++)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}
