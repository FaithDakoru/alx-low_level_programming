#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head node of the list
 * Return: head node’s data (n), or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *next;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	next = (*head)->next;
	n = temp->n;
	free(temp);
	*head = next;
	return (n);
}
