#ifndef DECK_H
#define DECK_H
#include <stdlib.h>
/**
 * enum kind_e - jjhhds
 * @SPADE: HHGHD
 * @HEART: JJHHHS
 * @CLUB: JJJD
 * @DIAMOND: JNHD
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 ** struct card_s - Playing card
 **
 ** @value: Value of the card
 ** From "Ace" to "King"
 ** @kind: Kind of the card
 **/
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 ** struct deck_node_s - Deck of card
 **
 ** @card: Pointer to the card of the node
 ** @prev: Pointer to the previous node of the list
 ** @next: Pointer to the next node of the list
 **/
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;
int cmp(const char *l1, const char *l2);
char value(deck_node_t *card);
void ins(deck_node_t **deck);
void insv(deck_node_t **deck);
void sort_deck(deck_node_t **deck);
#endif
