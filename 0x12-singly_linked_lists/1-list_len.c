#include "lists.h"
/**
 * list_len - prints value in each node in linked list
 * @h: header pointer/address of first node in linked list
 * Return: number of nodes in a linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *nextPtr;
	size_t count = 0;

	if (h == NULL)
		return (0);
	nextPtr = h;
	while (nextPtr != NULL)
	{
		nextPtr = nextPtr->next;
		count++;
	}
	return (count);
}
