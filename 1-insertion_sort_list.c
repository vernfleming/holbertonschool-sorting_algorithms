#include "sort.h"

/**
 * swap_nodes - swaps nodes in a doubly linked list
 * @list: pointer to head of list
 * @left: pointer to left node
 * @right: pointer to right node
 */

void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
	if (left->prev)
		left->prev->next = right;
	else
		*list = right;

	if (right->next)
		right->next->prev = left;

	left->next = right->next;
	right->prev = left->prev;
	left->prev = right;
	right->next = left;

	print_list(*list);
}

/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: pointer to head of list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		temp = current;
		current = current->next;
		while (temp->prev && temp->n < temp->prev->n)
		{
			swap_nodes(list, temp->prev, temp);
		}
	}
}
