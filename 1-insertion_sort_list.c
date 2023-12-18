#include "sort.h"

/**
 * swap_liselm - swaps 2 nodes in a doubly linked list
 *
 * @m: address of the first node
 *
 * @n: address of the seconed node
 *
 * Return: Nothing (Void)
 */

void swap_liselm(listint_t *m, listint_t *n)
{
	if (m->prev)
		m->prev->next = n;
	if (n->next)
		n->next->prev = m;
	m->next = n->next;
	n->prev = m->prev;
	m->prev = n;
	n->next = m;
}

/**
 * insertion_sort_list - insertion to sort a doubly linked list
 *
 * @list: the address of the node (head)
 *
 * Return: nothing (void)
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *m, *k;

	if (!list || !*list || !(*list)->next)
		return;
	m = (*list)->next;
	while (m)
	{
		k = m;
		m = m->next;
		while (k && k->prev)
		{
			if (k->prev->n > k->n)
			{
				swap_liselm(k->prev, k);
				if (!k->prev)
					*list = k;
				print_list((const listint_t *)*list);
			}
			else
				k = k->prev;
		}
	}
}
