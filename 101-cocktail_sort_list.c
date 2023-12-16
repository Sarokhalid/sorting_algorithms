#include "sort.h"
/**
 * cocktail_sort_list - shgggs
 * @list: jhsggjj
 */
void cocktail_sort_list(listint_t **list)
{
	int sw;
	listint_t *curr;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	do {
		sw = 0;
		for (curr = *list; curr->next != NULL; curr = curr->next)
		{
			if (curr->n > curr->next->n)
			{
				swa(list, &curr, &(curr->next));
				sw = 1;
				print_list(*list);
			}
		}
		if (!sw)
			break;
		sw = 0;
		for (; curr->prev != NULL; curr = curr->prev)
		{
			if (curr->n < curr->prev->n)
			{
				swa(list, &(curr->prev), &curr);
				sw = 1;
				print_list(*list);
			}
		}
	} while (sw);
}
/**
 * swa - hshghhjs
 * @list: hsgfggs
 * @n1: jhgs
 * @n2: jhgsgh
 */
void swa(listint_t **list, listint_t **n1, listint_t **n2)
{
	listint_t *pn1, *pn2, *nn1, *nn2;

	pn1 = (*n1)->prev;
	nn1 = (*n1)->next;
	pn2 = (*n2)->prev;
	nn2 = (*n2)->next;
	if (pn1 != NULL)
		pn1->next = *n2;
	else
		*list = *n2;
	if (nn2 != NULL)
		nn2->prev = *n1;
	(*n2)->prev = pn1;
	(*n2)->next = *n1;
	(*n1)->prev = nn2;
	(*n1)->next = nn2;
	if (nn1 != NULL)
		nn1->prev = *n2;
	(*n1)->next = nn2;
}
