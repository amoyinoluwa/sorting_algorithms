#include "sort.h"

void swapNodes(listint_t *node)
{
	listint_t *p, *pp, *n;

	p = node->prev;
	pp = p->prev;
	n = node->next;

	if (pp)
	{
		pp->next = node;
	}
	node->prev = pp;
	p->next = n;
	node->next = p;
	p->prev = node;
	if (n)
	{
		n->prev = p;
	}
}

/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: linked list to sort
 * Return: nothing
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	current = (*list)->next;
	while (current)
	{
		temp = current->next;
		while (current->prev && current->prev->n > current->n)
		{
			swapNodes(current);
			if (current->prev == NULL)
				*list = current;
			print_list(*list);
		}
		current = temp;
	}
}
