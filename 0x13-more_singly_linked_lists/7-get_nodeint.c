#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node of the list
 * @index: index of the node, starting at 0
 * Return: nth node of the list, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	current = head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
