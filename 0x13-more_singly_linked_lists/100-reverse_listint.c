#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to first node in linked list
 * Return: address of first node in reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}
	*head = temp;
	return (*head);
}
