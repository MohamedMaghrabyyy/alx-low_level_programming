#include "lists.h"
/**
 * free_listint - frees a linked list from memory
 * @head: pointer to first node in linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
