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
	unsigned int count = listint_len(head);

	if (index >= count || head == NULL)
		return (NULL);
	count = 0;
	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
