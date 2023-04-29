#include "lists.h"
/**
 * free_listint2 - frees the linked list
 * @head: pointer to the first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (head == NULL)
		return;
	while (ptr != NULL)
	{
		*head = ptr;
		ptr = ptr->next;
		free(*head);
	}
	*head = NULL;
}
