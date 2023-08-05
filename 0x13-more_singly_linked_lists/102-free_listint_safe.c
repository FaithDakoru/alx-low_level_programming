#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (count);
	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			free(*h);
			count++;
			break;
		}
		tmp = (*h)->next;
		free(*h);
		count++;
		*h = tmp;
	}
	*h = NULL;
	return (count);
}
