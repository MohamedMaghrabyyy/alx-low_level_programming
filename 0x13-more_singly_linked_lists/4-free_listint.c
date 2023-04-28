#include "lists.h"
/**
 * free_listint - frees a linked list from memory
 * @head: pointer to first node in linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *temp;

	if (head == NULL)
		return;
	while (ptr->next != NULL)
	{
		temp = ptr;
		free(temp);
		ptr = ptr->next;
	}
}
