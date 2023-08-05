#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head node of list
 * Return: address of node where loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow;
	listint_t *fast;

	slow = head;
	fast = head;
	while (slow != NULL && fast != NULL)
	{
		slow = slow->next;
		if (slow == NULL)
			break;
		fast = fast->next;
		if (fast == NULL)
			break;
		fast = fast->next;
		if (fast == NULL)
			break;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
