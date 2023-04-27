#include "lists.h"
/**
 * free_list - deletes a linked list from memory
 * @head: pointer to first node in linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	if (head == NULL)
		return;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
	head = NULL;
}
