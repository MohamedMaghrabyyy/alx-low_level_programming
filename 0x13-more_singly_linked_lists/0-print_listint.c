#include "lists.h"
/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to a linked list
 * Return: number of nodes in a linked list
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr = h;
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
