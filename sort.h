#ifndef SORT_H
#define SORT_H
#define UP 0
#define DOWN 1
#include <stddef.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick(int *array, size_t size, int l, int r);
int part(int *array, size_t size, int l, int r);
void swap(int *q, int *w);
void shell_sort(int *array, size_t size);
void swa(listint_t **list, listint_t **ta, listint_t **sh);
void swab(listint_t **list, listint_t **ta, listint_t **sh);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
int maxi(int *array, int size);
void merge_sort(int *array, size_t size);
void mr(int *sub, int *buf, size_t f, size_t b);
void ms(int *sub, int *buf, size_t f, size_t md, size_t b);
void heap(int *array, size_t size, size_t b, size_t ro);
void sw(int *q, int *w);
void heap_sort(int *array, size_t size);
void count(int *array, size_t size, int si, int *buf);
int get(int *array, int size);
void radix_sort(int *array, size_t size);
void SW(int *q, int *w);
void b(int *array, size_t size, size_t st, size_t sq, char f);
void bs(int *array, size_t size, size_t st, size_t sq, char f);
void bitonic_sort(int *array, size_t size);
#endif
