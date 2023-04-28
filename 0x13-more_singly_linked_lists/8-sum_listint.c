#include "lists.h"
/**
 * sum_listint - returns some of int values in all nodes
 * @head: pointer to first node in linked list
 * Return: sum of int values in all nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
