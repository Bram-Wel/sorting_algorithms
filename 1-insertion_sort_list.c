#include "sort.h"

/**
* insertion_sort_list - Sorts a list of integers
*
* @list: List to sort
* Description: Doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *node, *temp;

	if (!list || !list)
		return;

	head = *list;
	if (!head->next)
		return;
	while (head->next)
	{
		temp = head;
		node = head->next;
		if (head->n > node->n)
		{
			while (temp && temp->n > node->n)
			{
				temp->next = node->next;
				if (temp->next)
					temp->next->prev = temp;
				node->prev = temp->prev;
				if (node->prev)
					node->prev->next = node;
				else
					*list = node;
				temp->prev = node;
				node->next = temp;
				print_list(*list);
				temp = node->prev;
			}
			continue;
		}
		head = head->next;
	}
}
