#include "deck.h"
/**
 * cmp - jhhhe
 * @l1: jhhd
 * @l2: jjhhrf
 * Return: jhhd
 */
int cmp(const char *l1, const char *l2)
{
	while (*l1 && *l2 && *l1 == *l2)
	{
		l1++;
		l2++;
	}
	if (*l1 != *l2)
		return (*l1 - *l2);
	return (0);
}
/**
 * valuee - hgghd
 * @card: jhhhd
 * Return: jhhs
 */
char valuee(deck_node_t *card)
{
	if (cmp(card->card->value, "Ace") == 0)
		return (0);
	if (cmp(card->card->value, "1") == 0)
		return (1);
	if (cmp(card->card->value, "2") == 0)
		return (2);
	if (cmp(card->card->value, "3") == 0)
		return (3);
	if (cmp(card->card->value, "4") == 0)
		return (4);
	if (cmp(card->card->value, "5") == 0)
		return (5);
	if (cmp(card->card->value, "6") == 0)
		return (6);
	if (cmp(card->card->value, "7") == 0)
		return (7);
	if (cmp(card->card->value, "8") == 0)
		return (8);
	if (cmp(card->card->value, "9") == 0)
		return (9);
	if (cmp(card->card->value, "10") == 0)
		return (10);
	if (cmp(card->card->value, "Jack") == 0)
		return (11);
	if (cmp(card->card->value, "Queen") == 0)
		return (12);
	return (13);
}
/**
 * ins - jhhggs
 * @deck: hhggd
 */
void ins(deck_node_t **deck)
{
	deck_node_t *it, *in, *t;

	for (it = (*deck)->next; it != NULL; it = t)
	{
		t = it->next;
		in = it->prev;
		while (in != NULL && in->card->kind > it->card->kind)
		{
			in->next = it->next;
			if (it->next != NULL)
				it->next->prev = in;
			it->prev = in->prev;
			it->next = in;
			if (in->prev != NULL)
				in->prev->next = it;
			else
				*deck = it;
			in->prev = it;
			in = it->prev;
		}
	}
}
/**
 * insv - hjhggs
 * @deck: mjjhhhdhj
 */
void insv(deck_node_t **deck)
{
	deck_node_t *it, *in, *t;

	for (it = (*deck)->next; it != NULL; it = t)
	{
		t = it->next;
		in = it->prev;
		while (in != NULL && in->card->kind == it->card->kind
				&& valuee(in) > valuee(it))
		{
			in->next = it->next;
			if (it->next != NULL)
				it->next->prev = in;
			it->prev = in->prev;
			it->next = in;
			if (in->prev != NULL)
				in->prev->next = it;
			else
				*deck = it;
			in->prev = it;
			in = it->prev;
		}
	}
}
/**
 * sort_deck - hhdghhjd
 * @deck: hhggs
 */
void sort_deck(deck_node_t **deck)
{
	if (deck == NULL || *deck == NULL || (*deck)->next == NULL)
		return;
	ins(deck);
	insv(deck);
}
