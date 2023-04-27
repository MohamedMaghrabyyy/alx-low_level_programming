#include "lists.h"
/**
 * print_list - prints value in each node in linked list
 * @h: header pointer/address of first node in linked list
 * Return: number of nodes in a linked list
 */
size_t print_list(const list_t *h)
{
	list_t *nextPtr;
	size_t count = 0;

	if (h == NULL)
		return (0);
	nextPtr = h;
	while (nextPtr != NULL)
	{
		if (nextPtr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", nextPtr->len, nextPtr->str);
		nextPtr = nextPtr->next;
		count++;
	}
	return (count);
}
