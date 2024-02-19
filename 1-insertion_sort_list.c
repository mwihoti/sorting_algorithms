#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list in ascending order
 * @list: lists array to sort
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *starts, *insert, *iter, *new;

	if (!list || !(*list) || !((*list)->next))
		return;

	starts = (*list);
	iter = (*list)->next;

	while (iter)
	{
		new = iter->next;
		while (starts && iter->n < starts->n)
		{
			/*swapping position of integers*/
			if (starts->prev)
				starts->prev->next = iter;
			else
				*list = iter;
			if (iter->next)
				iter->next->prev = starts;
			insert = iter->next;
			iter->next = starts;
			iter->prev = starts->prev;
			starts->next = insert;
			starts->prev = iter;
			print_list(*list);
			starts = iter->prev;
		}
		iter = insert;
		if (iter)
			starts = iter->prev;
	}
}
