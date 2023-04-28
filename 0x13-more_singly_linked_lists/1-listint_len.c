#include "lists.h"
/**
 * listint_len - prints the number of nodes in a linked list
 * @h: pointer to first node in a linked list
 * Return: number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *ptr = h;
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
