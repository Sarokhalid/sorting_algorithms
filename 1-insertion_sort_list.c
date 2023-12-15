#include "sort.h"
/**
 * insertion_sort_list - hdjhhd
 * @list: jjdjjjd
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *k;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	curr = (*list)->next;
	while (curr != NULL)
	{
		k = curr;
		while (k->prev != NULL && k->n < k->prev->n)
		{
			k->prev->next = k->next;
			if (k->next != NULL)
				k->next->prev = k->prev;
			k->next = k->prev;
			k->prev = k->prev->prev;
			k->next->prev = k;
			if (k->prev != NULL)
				k->prev->next = k;
			else
				*list = k;
			print_list(*list);
		}
		curr = curr->next;
	}
}
