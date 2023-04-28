#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: pointer to first node in linked list
 * @n: int value to be passed to new node
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newPtr = malloc(sizeof(listint_t));
	listint_t *ptr;

	if (newPtr == NULL)
		return (NULL);

	newPtr->n = n;

	if (*head == NULL)
	{
		*head = newPtr;
		newPtr->next = NULL;
		return (newPtr);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = newPtr;
	newPtr->next = NULL;
	return (newPtr);
}
