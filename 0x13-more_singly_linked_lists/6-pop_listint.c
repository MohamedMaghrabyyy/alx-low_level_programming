#include "lists.h"
/**
 * pop_listint - removes the first node and prints its int value
 * @head: pointer to first node in linked list
 * Return: int value stored in first node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n;

	if (*head == NULL)
		return (0);
	n = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (n);
}
