#include "sort.h"
/**
 * swa - hhhhjd
 * @list: jhggf
 * @ta: jhggd
 * @sh: jjhggd
 */
void swa(listint_t **list, listint_t **ta, listint_t **sh)
{
	listint_t *t = (*sh)->next;

	if ((*sh)->prev != NULL)
		(*sh)->prev->next = t;
	else
		*list = t;
	t->prev = (*sh)->prev;
	(*sh)->next = t->next;
	if (t->next != NULL)
		t->next->prev = *sh;
	else
		*ta = *sh;
	(*sh)->prev = t;
	t->next = *sh;
	*sh = t;
}
/**
 * swab - jdshghhd
 * @list: jhgdf
 * @ta: jhdhjjd
 * @sh: jhghdhj
 */
void swab(listint_t **list, listint_t **ta, listint_t **sh)
{
	listint_t *t = (*sh)->prev;

	if ((*sh)->next != NULL)
		(*sh)->next->prev = t;
	else
		*ta = t;
	t->next = (*sh)->next;
	(*sh)->prev = t->prev;
	if (t->prev != NULL)
		t->prev->next = *sh;
	else
		*list = *sh;
	(*sh)->next = t;
	t->prev = *sh;
	*sh = t;
}
/**
 * cocktail_sort_list - idhujiid
 * @list: jhdggd
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *ta, *sh;
	bool shnot = false;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (ta = *list; ta->next != NULL;)
		ta = ta->next;
	while (shnot == false)
	{
		shnot = true;
		for (sh = *list; sh != ta; sh = sh->next)
		{
			if (sh->n > sh->next->n)
			{
				swa(list, &ta, &sh);
				print_list((const listint_t *) *list);
				shnot = false;
			}
		}
		for (sh = sh->prev; sh != *list; sh = sh->prev)
		{
			if (sh->n < sh->prev->n)
			{
				swab(list, &ta, &sh);
				print_list((const listint_t *) *list);
				shnot = false;
			}
		}
	}
}
